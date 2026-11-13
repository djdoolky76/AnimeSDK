#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKEMNFGCBLO;
namespace System { class Object; }

#define NKEMNFGCBLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA1B930)
#define NKEMNFGCBLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA1B970)
#define NKEMNFGCBLO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA1B980)

inline static constexpr unsigned int NKEMNFGCBLO___c_TypeDefinitionIndex = 26527;

	class NKEMNFGCBLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKEMNFGCBLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEMNFGCBLO___C_CTOR_OFFSET))(this);
		}

		::NKEMNFGCBLO* __cctor_b__23_0()
		{
			return ((::NKEMNFGCBLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEMNFGCBLO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

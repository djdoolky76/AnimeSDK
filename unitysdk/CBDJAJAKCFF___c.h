#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBDJAJAKCFF;
namespace System { class Object; }

#define CBDJAJAKCFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0642B0)
#define CBDJAJAKCFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0642F0)
#define CBDJAJAKCFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E064300)

inline static constexpr unsigned int CBDJAJAKCFF___c_TypeDefinitionIndex = 28799;

	class CBDJAJAKCFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBA60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBDJAJAKCFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF___C_CTOR_OFFSET))(this);
		}

		::CBDJAJAKCFF* __cctor_b__23_0()
		{
			return ((::CBDJAJAKCFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBDJAJAKCFF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

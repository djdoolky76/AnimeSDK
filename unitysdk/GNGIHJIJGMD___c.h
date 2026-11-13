#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNGIHJIJGMD;
namespace System { class Object; }

#define GNGIHJIJGMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDFF240)
#define GNGIHJIJGMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDFF280)
#define GNGIHJIJGMD___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDFF290)

inline static constexpr unsigned int GNGIHJIJGMD___c_TypeDefinitionIndex = 33995;

	class GNGIHJIJGMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNGIHJIJGMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD___C_CTOR_OFFSET))(this);
		}

		::GNGIHJIJGMD* __cctor_b__23_0()
		{
			return ((::GNGIHJIJGMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPAGBAALHMP;
namespace System { class Object; }

#define BPAGBAALHMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0132C0)
#define BPAGBAALHMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0132F0)
#define BPAGBAALHMP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E013300)

inline static constexpr unsigned int BPAGBAALHMP___c_TypeDefinitionIndex = 30850;

	class BPAGBAALHMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E8F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPAGBAALHMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP___C_CTOR_OFFSET))(this);
		}

		::BPAGBAALHMP* __cctor_b__38_0()
		{
			return ((::BPAGBAALHMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPAGBAALHMP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPGMIPJINKJ;
namespace System { class Object; }

#define BPGMIPJINKJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0194B0)
#define BPGMIPJINKJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0194F0)
#define BPGMIPJINKJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E019500)

inline static constexpr unsigned int BPGMIPJINKJ___c_TypeDefinitionIndex = 31585;

	class BPGMIPJINKJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPGMIPJINKJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ___C_CTOR_OFFSET))(this);
		}

		::BPGMIPJINKJ* __cctor_b__23_0()
		{
			return ((::BPGMIPJINKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPGMIPJINKJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

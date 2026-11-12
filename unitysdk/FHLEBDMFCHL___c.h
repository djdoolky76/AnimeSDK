#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHLEBDMFCHL;
namespace System { class Object; }

#define FHLEBDMFCHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6945F0)
#define FHLEBDMFCHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F694630)
#define FHLEBDMFCHL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F694640)

inline static constexpr unsigned int FHLEBDMFCHL___c_TypeDefinitionIndex = 30930;

	class FHLEBDMFCHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHLEBDMFCHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL___C_CTOR_OFFSET))(this);
		}

		::FHLEBDMFCHL* __cctor_b__28_0()
		{
			return ((::FHLEBDMFCHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

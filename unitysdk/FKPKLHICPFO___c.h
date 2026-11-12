#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKPKLHICPFO;
namespace System { class Object; }

#define FKPKLHICPFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6BA5D0)
#define FKPKLHICPFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6BA610)
#define FKPKLHICPFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6BA620)

inline static constexpr unsigned int FKPKLHICPFO___c_TypeDefinitionIndex = 31636;

	class FKPKLHICPFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKPKLHICPFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO___C_CTOR_OFFSET))(this);
		}

		::FKPKLHICPFO* __cctor_b__28_0()
		{
			return ((::FKPKLHICPFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPKLHICPFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

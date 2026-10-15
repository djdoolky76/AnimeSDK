#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMMHDEKAHEA;
namespace System { class Object; }

#define HMMHDEKAHEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2D70)
#define HMMHDEKAHEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D2DB0)
#define HMMHDEKAHEA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5D2DC0)

inline static constexpr unsigned int HMMHDEKAHEA___c_TypeDefinitionIndex = 27686;

	class HMMHDEKAHEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AA90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMMHDEKAHEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA___C_CTOR_OFFSET))(this);
		}

		::HMMHDEKAHEA* __cctor_b__28_0()
		{
			return ((::HMMHDEKAHEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMHDEKAHEA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

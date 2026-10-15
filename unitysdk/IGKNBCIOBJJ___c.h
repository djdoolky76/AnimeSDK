#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGKNBCIOBJJ;
namespace System { class Object; }

#define IGKNBCIOBJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E623190)
#define IGKNBCIOBJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6231D0)
#define IGKNBCIOBJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6231E0)

inline static constexpr unsigned int IGKNBCIOBJJ___c_TypeDefinitionIndex = 34452;

	class IGKNBCIOBJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BB60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGKNBCIOBJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ___C_CTOR_OFFSET))(this);
		}

		::IGKNBCIOBJJ* __cctor_b__28_0()
		{
			return ((::IGKNBCIOBJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKNBCIOBJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

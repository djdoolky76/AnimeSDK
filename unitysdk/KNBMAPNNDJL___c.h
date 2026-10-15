#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNBMAPNNDJL;
namespace System { class Object; }

#define KNBMAPNNDJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89F260)
#define KNBMAPNNDJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89F290)
#define KNBMAPNNDJL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E89F2A0)

inline static constexpr unsigned int KNBMAPNNDJL___c_TypeDefinitionIndex = 25460;

	class KNBMAPNNDJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x233A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBMAPNNDJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBMAPNNDJL___C_CTOR_OFFSET))(this);
		}

		::KNBMAPNNDJL* __cctor_b__33_0()
		{
			return ((::KNBMAPNNDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBMAPNNDJL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};

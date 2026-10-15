#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
class KCCMFPIOJHG;

#define KCCMFPIOJHG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D065360)
#define KCCMFPIOJHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D065350)
#define KCCMFPIOJHG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D065330)
#define KCCMFPIOJHG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D065340)

inline static constexpr unsigned int KCCMFPIOJHG_TypeDefinitionIndex = 10829;

	class KCCMFPIOJHG : public ::System::Object
	{
	public:
		static ::KCCMFPIOJHG** StaticGet_JCLEAFEOFAL()
		{
			return (::KCCMFPIOJHG**)UnitySDK::FromName("", "KCCMFPIOJHG")->GetStaticField(0x12E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCCMFPIOJHG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCCMFPIOJHG_CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::RPG::GameCore::CommonIndexKey a1, ::RPG::GameCore::CommonIndexKey a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + KCCMFPIOJHG_EQUALS_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode(::RPG::GameCore::CommonIndexKey a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::CommonIndexKey))((::PBYTE)hIl2Cpp + KCCMFPIOJHG_GETHASHCODE_OFFSET))(this, a1);
		}

	};

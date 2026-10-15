#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
class GEGLLAHJHOG;
class LBJLBMOOJGM;
namespace System { class Object; }

#define GEGLLAHJHOG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1EC6CDF0)
#define GEGLLAHJHOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC6DC20)
#define GEGLLAHJHOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC6CDE0)

inline static constexpr unsigned int GEGLLAHJHOG_TypeDefinitionIndex = 44291;

	class GEGLLAHJHOG : public ::System::Object
	{
	public:
		static ::GEGLLAHJHOG** StaticGet_FMJPMFEDIJL()
		{
			return (::GEGLLAHJHOG**)UnitySDK::FromName("", "GEGLLAHJHOG")->GetStaticField(0x4B0F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGLLAHJHOG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEGLLAHJHOG_CCTOR_OFFSET))();
		}

		::System::Object* BPLPBPMEODA(::ECIAICDLAHO* a1, ::LBJLBMOOJGM* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::ECIAICDLAHO*, ::LBJLBMOOJGM*))((::PBYTE)hIl2Cpp + GEGLLAHJHOG_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};

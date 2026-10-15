#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class DLOJKAIBPBI;
class JCKCHPFFEHM;
namespace GeometryEdit { class Prism; }

#define DBKCLBNIDDO_AODPPAJPDHH_OFFSET UNITYSDK_OFFSET(0xE229A90)
#define DBKCLBNIDDO_GPDPHINNIEK_OFFSET UNITYSDK_OFFSET(0xE22A440)
#define DBKCLBNIDDO_KIOJAINKEOA_OFFSET UNITYSDK_OFFSET(0xE22A280)
#define DBKCLBNIDDO_KJAMHAFONMN_OFFSET UNITYSDK_OFFSET(0xE229F30)
#define DBKCLBNIDDO_LAEFMCADGAK_OFFSET UNITYSDK_OFFSET(0xE229FF0)

inline static constexpr unsigned int DBKCLBNIDDO_TypeDefinitionIndex = 47394;

	class DBKCLBNIDDO : public ::System::Object
	{
	public:
		static ::DLOJKAIBPBI* AODPPAJPDHH(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::DLOJKAIBPBI*(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DBKCLBNIDDO_AODPPAJPDHH_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 LAEFMCADGAK(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + DBKCLBNIDDO_LAEFMCADGAK_OFFSET))(a1, a2, a3);
		}

		static ::DLOJKAIBPBI* KIOJAINKEOA(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::DLOJKAIBPBI*(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DBKCLBNIDDO_KIOJAINKEOA_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 KJAMHAFONMN(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + DBKCLBNIDDO_KJAMHAFONMN_OFFSET))(a1);
		}

		static ::JCKCHPFFEHM* GPDPHINNIEK(::GeometryEdit::Prism* a1)
		{
			return ((::JCKCHPFFEHM*(*)(::GeometryEdit::Prism*))((::PBYTE)hIl2Cpp + DBKCLBNIDDO_GPDPHINNIEK_OFFSET))(a1);
		}

	};

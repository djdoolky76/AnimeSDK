#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class RectTransform; }

#define CLGLEEGCBFK_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1203E940)
#define CLGLEEGCBFK_ENNIIACOGBE_OFFSET UNITYSDK_OFFSET(0x1203E990)
#define CLGLEEGCBFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1203D530)
#define CLGLEEGCBFK_FLLNLCPDHAJ_OFFSET UNITYSDK_OFFSET(0x1203D650)
#define CLGLEEGCBFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1203D4F0)
#define CLGLEEGCBFK_HGIDNBCGFBN_OFFSET UNITYSDK_OFFSET(0x1203E390)
#define CLGLEEGCBFK_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x1203E980)
#define CLGLEEGCBFK_JGBGPJACDOG_OFFSET UNITYSDK_OFFSET(0x1203E930)
#define CLGLEEGCBFK_JJNDAIGPMBF_OFFSET UNITYSDK_OFFSET(0x1203E4B0)
#define CLGLEEGCBFK_JKGJGIFDPAK_OFFSET UNITYSDK_OFFSET(0x1203DD70)
#define CLGLEEGCBFK_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x1203E880)
#define CLGLEEGCBFK_JOOGNPGNKLB_OFFSET UNITYSDK_OFFSET(0x1203E5D0)
#define CLGLEEGCBFK_KHEMJIGOLEA_OFFSET UNITYSDK_OFFSET(0x1203DFD0)
#define CLGLEEGCBFK_KLHHDNEBEOA_OFFSET UNITYSDK_OFFSET(0x1203D970)
#define CLGLEEGCBFK_OCEGNKFCOEO_OFFSET UNITYSDK_OFFSET(0x1203E8E0)
#define CLGLEEGCBFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1203D5D0)
#define CLGLEEGCBFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1203D640)

inline static constexpr unsigned int CLGLEEGCBFK_TypeDefinitionIndex = 51387;

class CLGLEEGCBFK : public ::System::Object
{
public:
	::UnityEngine::RectTransform* FANEAPLBCFD; // 0x10
	::System::Int32 OEKPCICOOKO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGLEEGCBFK__CTOR_OFFSET))(this);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* EIFONLCJOPG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_EQUALS_OFFSET))(this, EIFONLCJOPG);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_TOSTRING_OFFSET))(this);
	}

	static ::System::Void FLLNLCPDHAJ(::UnityEngine::RectTransform* MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_FLLNLCPDHAJ_OFFSET))(MGOFOAFCFIJ);
	}

	static ::System::Void KHEMJIGOLEA(::UnityEngine::RectTransform* MGOFOAFCFIJ)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_KHEMJIGOLEA_OFFSET))(MGOFOAFCFIJ);
	}

	static ::System::Boolean KLHHDNEBEOA(::UnityEngine::RectTransform* HBBPLHKKOHB, ::System::Collections::Generic::List_1<::UnityEngine::Component*>* OAIIJLKKLLI)
	{
		return ((::System::Boolean(*)(::UnityEngine::RectTransform*, ::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_KLHHDNEBEOA_OFFSET))(HBBPLHKKOHB, OAIIJLKKLLI);
	}

	static ::System::Void HGIDNBCGFBN(::System::Collections::Generic::List_1<::UnityEngine::Component*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_HGIDNBCGFBN_OFFSET))(FNGBEJKAECI);
	}

	static ::System::Void JOOGNPGNKLB(::UnityEngine::RectTransform* HBBPLHKKOHB)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_JOOGNPGNKLB_OFFSET))(HBBPLHKKOHB);
	}

	::System::Void JMDEKPONKMF(::UnityEngine::RectTransform* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_JMDEKPONKMF_OFFSET))(this, NCIMBHDKIJM);
	}

	::System::Boolean JGBGPJACDOG(::System::Object* MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_JGBGPJACDOG_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void JJNDAIGPMBF(::System::Collections::Generic::List_1<::UnityEngine::Component*>* FNGBEJKAECI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Component*>*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_JJNDAIGPMBF_OFFSET))(FNGBEJKAECI);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_HLPHPBAODIF_OFFSET))(this);
	}

	static ::System::Void JKGJGIFDPAK(::UnityEngine::RectTransform* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_JKGJGIFDPAK_OFFSET))(NCIMBHDKIJM);
	}

	::System::Void OCEGNKFCOEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_OCEGNKFCOEO_OFFSET))(this);
	}

	::UnityEngine::RectTransform* ENNIIACOGBE()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGLEEGCBFK_ENNIIACOGBE_OFFSET))(this);
	}
};

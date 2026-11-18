#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class OFEPJCHJCGK_HFACBLDEKKH;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define OFEPJCHJCGK_EOKAFMCBFAJ_EGGELAMAKFE_OFFSET UNITYSDK_OFFSET(0x11B25960)
#define OFEPJCHJCGK_EOKAFMCBFAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11B25950)

inline static constexpr unsigned int OFEPJCHJCGK_EOKAFMCBFAJ_TypeDefinitionIndex = 70724;

class OFEPJCHJCGK_EOKAFMCBFAJ : public ::System::Object
{
public:
	::System::Action_3<::Foundation::AssetPath, ::System::Int32, ::System::Int32>* AMHGBGMOMLL; // 0x10
	::OFEPJCHJCGK_HFACBLDEKKH* HEJIBNEHLIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_EOKAFMCBFAJ__CTOR_OFFSET))(this);
	}

	::System::Void EGGELAMAKFE(::Foundation::AssetPath JNDDJMAHNAI, ::System::Int32 HDGINBIEIKI, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OFEPJCHJCGK_EOKAFMCBFAJ_EGGELAMAKFE_OFFSET))(this, JNDDJMAHNAI, HDGINBIEIKI, ABHBKFJKINO);
	}
};

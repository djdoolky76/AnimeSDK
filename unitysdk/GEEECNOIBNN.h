#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityRunState; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define GEEECNOIBNN_ABDLEONNPAJ_1_OFFSET UNITYSDK_OFFSET(0x15F163C0)
#define GEEECNOIBNN_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x15F16310)
#define GEEECNOIBNN__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16300)

inline static constexpr unsigned int GEEECNOIBNN_TypeDefinitionIndex = 90645;

class GEEECNOIBNN : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* GIOHBDEAMNN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DBCNHJEOPNG; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* FNLIBLEIDKB; // 0x20
	::UnityEngine::AnimationCurve* DDBHCJFOHFE; // 0x28
	::System::Single IJDEOFBKDBA; // 0x30
	::System::Single DHEAEIPNFNE; // 0x34
	::System::Single CDLMHMKMPLD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEECNOIBNN__CTOR_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ(::System::String* MCOHLHMKLIP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GEEECNOIBNN_ABDLEONNPAJ_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void ABDLEONNPAJ_1(::MoleMole::Config::ConfigEntityRunState* EPOGECNDNGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunState*))((::PBYTE)hIl2Cpp + GEEECNOIBNN_ABDLEONNPAJ_1_OFFSET))(this, EPOGECNDNGK);
	}
};

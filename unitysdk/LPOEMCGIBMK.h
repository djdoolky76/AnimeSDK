#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"

namespace Code::Logic::Data::ScriptObject::Level { class Layer; }

#define LPOEMCGIBMK_GLOAAACBNPP_1_OFFSET UNITYSDK_OFFSET(0x17CF94F0)
#define LPOEMCGIBMK_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x17CF9330)
#define LPOEMCGIBMK_IKOKHNGDLIE_OFFSET UNITYSDK_OFFSET(0x17CF9600)
#define LPOEMCGIBMK__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF90F0)

inline static constexpr unsigned int LPOEMCGIBMK_TypeDefinitionIndex = 52459;

class LPOEMCGIBMK : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x10
	::System::Int32 KHMIPHIFGOC; // 0x18
	::System::Int32 CNJLGGHAMDB; // 0x1C

	::System::Void _ctor(::Code::Logic::Data::ScriptObject::Level::Layer* ODPEJNDHNNA)
	{
		return ((::System::Void(*)(::PVOID, ::Code::Logic::Data::ScriptObject::Level::Layer*))((::PBYTE)hIl2Cpp + LPOEMCGIBMK__CTOR_OFFSET))(this, ODPEJNDHNNA);
	}

	::System::Nullable_1<::UnityEngine::Vector3> GLOAAACBNPP(::System::Single HBJOLKHGGDD, ::System::Single HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LPOEMCGIBMK_GLOAAACBNPP_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG);
	}

	::System::Nullable_1<::UnityEngine::Vector3> GLOAAACBNPP_1(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LPOEMCGIBMK_GLOAAACBNPP_1_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG);
	}

	::System::Int32 IKOKHNGDLIE(::System::Int32 HBJOLKHGGDD, ::System::Int32 HPMEONKHFGG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LPOEMCGIBMK_IKOKHNGDLIE_OFFSET))(this, HBJOLKHGGDD, HPMEONKHFGG);
	}
};

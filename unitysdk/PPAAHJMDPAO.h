#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine::AI { class NavMeshQueryAsyncOperation; }

#define PPAAHJMDPAO_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1CB5C9B0)
#define PPAAHJMDPAO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1CB5C970)
#define PPAAHJMDPAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CB5C900)
#define PPAAHJMDPAO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB5C960)
#define PPAAHJMDPAO__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5C950)

inline static constexpr unsigned int PPAAHJMDPAO_TypeDefinitionIndex = 88667;

class PPAAHJMDPAO : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_ICOHJLIGJKG()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PPAAHJMDPAO_TypeDefinitionIndex)->GetStaticField(0x10150);
	}
	::UnityEngine::AI::NavMeshQueryAsyncOperation* FEOKCKPMGAJ; // 0x10
	::System::Threading::CancellationTokenSource* ICDPOIKHFGD; // 0x18
	::System::Int32 APKIKLPPHEA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAAHJMDPAO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPAAHJMDPAO__CCTOR_OFFSET))();
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAAHJMDPAO_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPAAHJMDPAO_DPIHOJBBGLA_OFFSET))(this);
	}

	static ::PPAAHJMDPAO* BBPCBEEHALC()
	{
		return ((::PPAAHJMDPAO*(*)())((::PBYTE)hIl2Cpp + PPAAHJMDPAO_BBPCBEEHALC_OFFSET))();
	}
};

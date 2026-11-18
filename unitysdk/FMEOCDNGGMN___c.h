#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineDataExtra; }
namespace System { template <typename T> class Comparison_1; }

#define FMEOCDNGGMN___C_FNGCNOHNKJL_OFFSET UNITYSDK_OFFSET(0x156C90E0)
#define FMEOCDNGGMN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x156C9090)
#define FMEOCDNGGMN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x156C90D0)

inline static constexpr unsigned int FMEOCDNGGMN___c_TypeDefinitionIndex = 84867;

class FMEOCDNGGMN___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(FMEOCDNGGMN___c_TypeDefinitionIndex)->GetStaticField(0x43560);
	}
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineDataExtra*>>** StaticGet___9__2_2()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineDataExtra*>>**)Il2CppClass::FromTypeDefinitionIndex(FMEOCDNGGMN___c_TypeDefinitionIndex)->GetStaticField(0x43568);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMEOCDNGGMN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMEOCDNGGMN___C__CTOR_OFFSET))(this);
	}

	::System::Int32 FNGCNOHNKJL(::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineDataExtra*> EIHELBHCLID, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineDataExtra*> NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineDataExtra*>, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineDataExtra*>))((::PBYTE)hIl2Cpp + FMEOCDNGGMN___C_FNGCNOHNKJL_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}
};

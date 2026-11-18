#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineData; }
namespace System { template <typename T> class Comparison_1; }

#define HPCFOEMJIEK___C_FNGCNOHNKJL_OFFSET UNITYSDK_OFFSET(0x14D3AF20)
#define HPCFOEMJIEK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D3AED0)
#define HPCFOEMJIEK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3AF10)

inline static constexpr unsigned int HPCFOEMJIEK___c_TypeDefinitionIndex = 83295;

class HPCFOEMJIEK___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineData*>>** StaticGet___9__2_2()
	{
		return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineData*>>**)Il2CppClass::FromTypeDefinitionIndex(HPCFOEMJIEK___c_TypeDefinitionIndex)->GetStaticField(0x3B1B0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HPCFOEMJIEK___c_TypeDefinitionIndex)->GetStaticField(0x3B1B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPCFOEMJIEK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCFOEMJIEK___C__CTOR_OFFSET))(this);
	}

	::System::Int32 FNGCNOHNKJL(::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineData*> EIHELBHCLID, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineData*> NDGKJHLLCIN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineData*>, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetPath, ::MoleMole::ConfigTimelineData*>))((::PBYTE)hIl2Cpp + HPCFOEMJIEK___C_FNGCNOHNKJL_OFFSET))(this, EIHELBHCLID, NDGKJHLLCIN);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAPScrollView/DataStruct/PluginProxyBase.h"

#define NAPSCROLLVIEW_DATASTRUCT_EMPTYPLUGINPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1287CE50)
#define NAPSCROLLVIEW_DATASTRUCT_EMPTYPLUGINPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1287CE40)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int EmptyPluginProxy_TypeDefinitionIndex = 73658;

	class EmptyPluginProxy : public ::NAPScrollView::DataStruct::PluginProxyBase
	{
	public:
		static ::NAPScrollView::DataStruct::EmptyPluginProxy** StaticGet_Instance()
		{
			return (::NAPScrollView::DataStruct::EmptyPluginProxy**)Il2CppClass::FromTypeDefinitionIndex(EmptyPluginProxy_TypeDefinitionIndex)->GetStaticField(0x39450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYPLUGINPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_EMPTYPLUGINPROXY__CCTOR_OFFSET))();
		}
	};
}

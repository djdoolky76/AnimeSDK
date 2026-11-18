#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13577520)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13577560)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__REGISTERPORTS_B__7_0_OFFSET UNITYSDK_OFFSET(0x13577570)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__REGISTERPORTS_B__7_1_OFFSET UNITYSDK_OFFSET(0x135775B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ListenChallengeUpdateByItemID___c_TypeDefinitionIndex = 77759;

	class LD_AbyssS2_ListenChallengeUpdateByItemID___c : public ::System::Object
	{
	public:
		static ::FlowCanvas::ValueHandler_1<::System::Int32>** StaticGet___9__7_1()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenChallengeUpdateByItemID___c_TypeDefinitionIndex)->GetStaticField(0x46C60);
		}
		static ::FlowCanvas::ValueHandler_1<::System::Int32>** StaticGet___9__7_0()
		{
			return (::FlowCanvas::ValueHandler_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenChallengeUpdateByItemID___c_TypeDefinitionIndex)->GetStaticField(0x46C68);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LD_AbyssS2_ListenChallengeUpdateByItemID___c_TypeDefinitionIndex)->GetStaticField(0x46C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__7_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__REGISTERPORTS_B__7_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__7_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_LISTENCHALLENGEUPDATEBYITEMID___C__REGISTERPORTS_B__7_1_OFFSET))(this);
		}
	};
}

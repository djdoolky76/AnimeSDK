#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas::Nodes { class SwitchInt; }
namespace NodeCanvas::Framework { class Graph; }
namespace NodeCanvas::Framework { class Node; }
namespace ParadoxNotion { class HierarchyTree_Element; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define GGCHLABPAIE_BBMDACHKLHE_1_OFFSET UNITYSDK_OFFSET(0x15F1D2D0)
#define GGCHLABPAIE_BBMDACHKLHE_OFFSET UNITYSDK_OFFSET(0x15F1C0F0)
#define GGCHLABPAIE_FEKPJDHOPBP_OFFSET UNITYSDK_OFFSET(0x15F1DD50)
#define GGCHLABPAIE_HINAGCEHLGN_OFFSET UNITYSDK_OFFSET(0x15F1D130)
#define GGCHLABPAIE_OPMLIMGFIKC_OFFSET UNITYSDK_OFFSET(0x15F1CB60)

inline static constexpr unsigned int GGCHLABPAIE_TypeDefinitionIndex = 79320;

class GGCHLABPAIE : public ::System::Object
{
public:
	static ::System::Int32 BBMDACHKLHE(::ParadoxNotion::HierarchyTree_Element* MGIDOKMICNB, ::NodeCanvas::Framework::Node* KKJEBAEEJCA)
	{
		return ((::System::Int32(*)(::ParadoxNotion::HierarchyTree_Element*, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_BBMDACHKLHE_OFFSET))(MGIDOKMICNB, KKJEBAEEJCA);
	}

	static ::System::Void OPMLIMGFIKC(::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>*& FKIJMJPAMOJ, ::FlowCanvas::Nodes::SwitchInt* HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::NodeCanvas::Framework::Node*>*&, ::FlowCanvas::Nodes::SwitchInt*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_OPMLIMGFIKC_OFFSET))(FKIJMJPAMOJ, HHIJHDFHPOI);
	}

	static ::System::Int32 BBMDACHKLHE_1(::NodeCanvas::Framework::Graph* HODAIDNDKHD, ::NodeCanvas::Framework::Node* KKJEBAEEJCA)
	{
		return ((::System::Int32(*)(::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_BBMDACHKLHE_1_OFFSET))(HODAIDNDKHD, KKJEBAEEJCA);
	}

	static ::System::Threading::Tasks::Task_1<::System::Int32>* FEKPJDHOPBP(::NodeCanvas::Framework::Graph* HODAIDNDKHD, ::NodeCanvas::Framework::Node* KKJEBAEEJCA)
	{
		return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::NodeCanvas::Framework::Graph*, ::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_FEKPJDHOPBP_OFFSET))(HODAIDNDKHD, KKJEBAEEJCA);
	}

	static ::System::Int32 HINAGCEHLGN(::NodeCanvas::Framework::Node* HLFFCMIFFIB)
	{
		return ((::System::Int32(*)(::NodeCanvas::Framework::Node*))((::PBYTE)hIl2Cpp + GGCHLABPAIE_HINAGCEHLGN_OFFSET))(HLFFCMIFFIB);
	}
};

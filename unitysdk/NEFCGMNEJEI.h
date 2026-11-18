#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class NEFCGMNEJEI_DAGKFKHLNJK;
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class FlowControlNode; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NEFCGMNEJEI_AFPGMJMLGGC_OFFSET UNITYSDK_OFFSET(0x1313CDA0)
#define NEFCGMNEJEI_INIENJPKIPP_OFFSET UNITYSDK_OFFSET(0x1313C7E0)
#define NEFCGMNEJEI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1313C7D0)

inline static constexpr unsigned int NEFCGMNEJEI_TypeDefinitionIndex = 48997;

class NEFCGMNEJEI : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_NDOCAPKLDOB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NEFCGMNEJEI_TypeDefinitionIndex)->GetStaticField(0xF2D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEFCGMNEJEI__CCTOR_OFFSET))();
	}

	static ::System::Void INIENJPKIPP(::MoleMole::EntityHandle KECKGDFIALJ, ::NEFCGMNEJEI_DAGKFKHLNJK* MNBBHODKFDM)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::NEFCGMNEJEI_DAGKFKHLNJK*))((::PBYTE)hIl2Cpp + NEFCGMNEJEI_INIENJPKIPP_OFFSET))(KECKGDFIALJ, MNBBHODKFDM);
	}

	static ::System::Void AFPGMJMLGGC(::FlowCanvas::Nodes::FlowControlNode* HHIJHDFHPOI, ::MoleMole::Config::InteractEntry* EFGJIGKCOAJ, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>* GEIPGFFAKLD, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* FFFEHPBNKDA, ::System::Func_1<::System::Object*>* JGBHPPJNGMJ)
	{
		return ((::System::Void(*)(::FlowCanvas::Nodes::FlowControlNode*, ::MoleMole::Config::InteractEntry*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::FlowCanvas::FlowOutput*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Func_1<::System::Object*>*))((::PBYTE)hIl2Cpp + NEFCGMNEJEI_AFPGMJMLGGC_OFFSET))(HHIJHDFHPOI, EFGJIGKCOAJ, GEIPGFFAKLD, FFFEHPBNKDA, JGBHPPJNGMJ);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NodeMap; }
namespace MoleMole::Config { class RenderMaterial; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGDNMCIEPOP_HCOJPALBNAH_OFFSET UNITYSDK_OFFSET(0x125CF690)
#define GGDNMCIEPOP_NHOKEPHDBHP_OFFSET UNITYSDK_OFFSET(0x125CFB50)

inline static constexpr unsigned int GGDNMCIEPOP_TypeDefinitionIndex = 42991;

class GGDNMCIEPOP : public ::System::Object
{
public:
	static ::System::Object* HCOJPALBNAH(::MoleMole::NodeMap* KNHIFHIKHIO, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>* DJLOKMMLFJC, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*& IGAAKDOIPNN)
	{
		return ((::System::Object*(*)(::MoleMole::NodeMap*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*, ::System::Collections::Generic::List_1<::MoleMole::Config::RenderMaterial*>*&))((::PBYTE)hIl2Cpp + GGDNMCIEPOP_HCOJPALBNAH_OFFSET))(KNHIFHIKHIO, DJLOKMMLFJC, IGAAKDOIPNN);
	}

	static ::System::Void NHOKEPHDBHP(::MoleMole::NodeMap* KNHIFHIKHIO, ::System::String* MCOHLHMKLIP, ::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::MoleMole::NodeMap*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + GGDNMCIEPOP_NHOKEPHDBHP_OFFSET))(KNHIFHIKHIO, MCOHLHMKLIP, DJLOKMMLFJC);
	}
};

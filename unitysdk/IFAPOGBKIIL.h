#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole::ChessStateMachine { class ChessSMPathMap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IFAPOGBKIIL_APFEEDKCDCN_1_OFFSET UNITYSDK_OFFSET(0x13A96BA0)
#define IFAPOGBKIIL_APFEEDKCDCN_OFFSET UNITYSDK_OFFSET(0x13A96AF0)
#define IFAPOGBKIIL_GAFPGIEGFFP_OFFSET UNITYSDK_OFFSET(0x13A96A00)
#define IFAPOGBKIIL_PGDINAJKJPB_OFFSET UNITYSDK_OFFSET(0x13A96910)
#define IFAPOGBKIIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A96900)
#define IFAPOGBKIIL__CTOR_OFFSET UNITYSDK_OFFSET(0x13A968F0)

inline static constexpr unsigned int IFAPOGBKIIL_TypeDefinitionIndex = 93154;

class IFAPOGBKIIL : public ::System::Object
{
public:
	static ::MoleMole::ChessStateMachine::ChessSMPathMap** StaticGet_OFBNEMLFBNL()
	{
		return (::MoleMole::ChessStateMachine::ChessSMPathMap**)Il2CppClass::FromTypeDefinitionIndex(IFAPOGBKIIL_TypeDefinitionIndex)->GetStaticField(0x51F60);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFAPOGBKIIL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFAPOGBKIIL__CCTOR_OFFSET))();
	}

	static ::MoleMole::ChessStateMachine::ChessSMPathMap* PGDINAJKJPB()
	{
		return ((::MoleMole::ChessStateMachine::ChessSMPathMap*(*)())((::PBYTE)hIl2Cpp + IFAPOGBKIIL_PGDINAJKJPB_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::String*>* APFEEDKCDCN(::System::Collections::Generic::List_1<::System::String*>* ECIPMKDALJC, ::System::String* GACCALFNOLC, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + IFAPOGBKIIL_APFEEDKCDCN_OFFSET))(ECIPMKDALJC, GACCALFNOLC, ABHBKFJKINO);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* APFEEDKCDCN_1(::System::String* GACCALFNOLC, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + IFAPOGBKIIL_APFEEDKCDCN_1_OFFSET))(GACCALFNOLC, ABHBKFJKINO);
	}

	static ::Foundation::AssetPath GAFPGIEGFFP()
	{
		return ((::Foundation::AssetPath(*)())((::PBYTE)hIl2Cpp + IFAPOGBKIIL_GAFPGIEGFFP_OFFSET))();
	}
};

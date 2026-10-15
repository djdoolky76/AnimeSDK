#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENLNFBCDEIO.h"
#include "unitysdk/JOHKNMBNPOD.h"
class EKOJBGEHGDL;
namespace RPG::Client::Prop { class BoxmanPuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFJNHKNKPNN_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC4A010)
#define CFJNHKNKPNN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC49FA0)

inline static constexpr unsigned int CFJNHKNKPNN_TypeDefinitionIndex = 78938;

	class CFJNHKNKPNN : public ::ENLNFBCDEIO
	{
	public:
		::System::Collections::Generic::List_1<::EKOJBGEHGDL*>* DMGBFHODIBD; // 0x10
		::System::Collections::Generic::List_1<::EKOJBGEHGDL*>* JBDJGOJIKLJ; // 0x18
		::System::Int32 IFEPJHGNCOI; // 0x20
		static ::System::Collections::Generic::List_1<::JOHKNMBNPOD>** StaticGet_PHBNPGOELBP()
		{
			return (::System::Collections::Generic::List_1<::JOHKNMBNPOD>**)UnitySDK::FromName("", "CFJNHKNKPNN")->GetStaticField(0x21900);
		}

		::System::Void _ctor(::RPG::Client::Prop::BoxmanPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleBoard*))((::PBYTE)hIl2Cpp + CFJNHKNKPNN_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFJNHKNKPNN_CCTOR_OFFSET))();
		}

	};

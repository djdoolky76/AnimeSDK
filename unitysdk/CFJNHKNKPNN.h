#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENLNFBCDEIO.h"
#include "unitysdk/JOHKNMBNPOD.h"
class EKOJBGEHGDL;
namespace RPG::Client::Prop { class BoxmanPuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFJNHKNKPNN_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC4F4A0)
#define CFJNHKNKPNN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC4F430)

inline static constexpr unsigned int CFJNHKNKPNN_TypeDefinitionIndex = 78939;

	class CFJNHKNKPNN : public ::ENLNFBCDEIO
	{
	public:
		::System::Collections::Generic::List_1<::EKOJBGEHGDL*>* JBDJGOJIKLJ; // 0x10
		::System::Collections::Generic::List_1<::EKOJBGEHGDL*>* DMGBFHODIBD; // 0x18
		::System::Int32 IFEPJHGNCOI; // 0x20
		static ::System::Collections::Generic::List_1<::JOHKNMBNPOD>** StaticGet_PHBNPGOELBP()
		{
			return (::System::Collections::Generic::List_1<::JOHKNMBNPOD>**)UnitySDK::FromName("", "CFJNHKNKPNN")->GetStaticField(0x23B40);
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

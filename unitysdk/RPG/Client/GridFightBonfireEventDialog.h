#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonfireEventDialog; }
namespace RPG::Client { class GridFightBonfireEventDialogSentence; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG_CREATE_OFFSET UNITYSDK_OFFSET(0x1D57C9A0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57D640)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG_GET_SENTENCECOUNT_OFFSET UNITYSDK_OFFSET(0x1D57D5B0)
#define RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG_GET_SENTENCES_OFFSET UNITYSDK_OFFSET(0x1D57D600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonfireEventDialog_TypeDefinitionIndex = 65868;

	class GridFightBonfireEventDialog : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEventDialogSentence*>* _Sentences; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG_CTOR_OFFSET))(this);
		}

		::System::Int32 get_SentenceCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG_GET_SENTENCECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEventDialogSentence*>* get_Sentences()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightBonfireEventDialogSentence*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG_GET_SENTENCES_OFFSET))(this);
		}

		static ::RPG::Client::GridFightBonfireEventDialog* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightBonfireEventDialog*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONFIREEVENTDIALOG_CREATE_OFFSET))(a1);
		}

	};
}

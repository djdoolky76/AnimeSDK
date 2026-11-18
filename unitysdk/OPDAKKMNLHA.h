#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"
#include "unitysdk/NMBAKCBAEED.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPDAKKMNLHA_AMBDGGJPPJC_OFFSET UNITYSDK_OFFSET(0x15F8EC70)
#define OPDAKKMNLHA_BLKJDELBNNB_OFFSET UNITYSDK_OFFSET(0x15F8F350)
#define OPDAKKMNLHA_CMCHDDFGAFE_OFFSET UNITYSDK_OFFSET(0x15F8ED30)
#define OPDAKKMNLHA_FHNKIPNIIPJ_OFFSET UNITYSDK_OFFSET(0x15F8EC20)
#define OPDAKKMNLHA_GEFBPJHBPJJ_OFFSET UNITYSDK_OFFSET(0x15F8F4A0)
#define OPDAKKMNLHA_GIFADCIMPKN_OFFSET UNITYSDK_OFFSET(0x15F8F130)
#define OPDAKKMNLHA_GMMDODBGLLO_OFFSET UNITYSDK_OFFSET(0x15F8EDB0)
#define OPDAKKMNLHA_HANABGCCPBA_OFFSET UNITYSDK_OFFSET(0x15F8EFC0)
#define OPDAKKMNLHA_HNCJEJBCHAN_OFFSET UNITYSDK_OFFSET(0x15F8F300)
#define OPDAKKMNLHA_IOHNJBPNHJA_OFFSET UNITYSDK_OFFSET(0x15F8F050)
#define OPDAKKMNLHA_IPDHCDGDLEJ_OFFSET UNITYSDK_OFFSET(0x15F8F4F0)
#define OPDAKKMNLHA_JIPNMJHKEKN_OFFSET UNITYSDK_OFFSET(0x15F8F0D0)
#define OPDAKKMNLHA_MEAEADNIHND_OFFSET UNITYSDK_OFFSET(0x15F8F1C0)
#define OPDAKKMNLHA_NNONNOFKNAG_OFFSET UNITYSDK_OFFSET(0x15F8F280)
#define OPDAKKMNLHA_OFEKLEJIKMO_OFFSET UNITYSDK_OFFSET(0x15F8F2C0)
#define OPDAKKMNLHA_OLPPJLMHIGM_OFFSET UNITYSDK_OFFSET(0x15F8ED70)
#define OPDAKKMNLHA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8EC10)

inline static constexpr unsigned int OPDAKKMNLHA_TypeDefinitionIndex = 73634;

class OPDAKKMNLHA : public ::System::Object
{
public:
	::System::String* PFLKHEPPIPJ; // 0x10
	::System::String* IFGMNMDPILK; // 0x18
	::System::String* BCPPCELDALM; // 0x20
	::System::Action* HPLEBMHAJHH; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* GGMBEHJJGFB; // 0x30
	::MoleMole::GalGame::ModelConfigTemplateType OHMFNPBKMHH; // 0x38
	::System::Boolean JEKHGBCLDOC; // 0x3C
	::System::Byte _padding0[0x3];
	::System::Int32 NNMLFJEIDCN; // 0x40
	::NMBAKCBAEED OBNIAHNMHPF; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA__CTOR_OFFSET))(this);
	}

	::System::Void FHNKIPNIIPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_FHNKIPNIIPJ_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* AMBDGGJPPJC()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_AMBDGGJPPJC_OFFSET))(this);
	}

	::NMBAKCBAEED CMCHDDFGAFE()
	{
		return ((::NMBAKCBAEED(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_CMCHDDFGAFE_OFFSET))(this);
	}

	::MoleMole::GalGame::ModelConfigTemplateType OLPPJLMHIGM()
	{
		return ((::MoleMole::GalGame::ModelConfigTemplateType(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_OLPPJLMHIGM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* GMMDODBGLLO(::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* FBDLJCNBJEO)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_GMMDODBGLLO_OFFSET))(this, FBDLJCNBJEO);
	}

	::System::Void HANABGCCPBA(::System::String* HIAIKHDFCLN, ::System::String* BONALIEOCCJ, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* GMHAHCIMLEE, ::System::String* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*, ::System::String*))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_HANABGCCPBA_OFFSET))(this, HIAIKHDFCLN, BONALIEOCCJ, GMHAHCIMLEE, FCCLIEJAKLI);
	}

	::System::Void IOHNJBPNHJA(::System::String* BONALIEOCCJ, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* GMHAHCIMLEE, ::System::String* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*, ::System::String*))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_IOHNJBPNHJA_OFFSET))(this, BONALIEOCCJ, GMHAHCIMLEE, FCCLIEJAKLI);
	}

	::System::Void JIPNMJHKEKN(::MoleMole::GalGame::ModelConfigTemplateType JBINFMAIOJN, ::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ModelConfigTemplateType, ::System::Int32))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_JIPNMJHKEKN_OFFSET))(this, JBINFMAIOJN, MGMDLMBEDJF);
	}

	::System::String* GIFADCIMPKN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_GIFADCIMPKN_OFFSET))(this);
	}

	::System::Void MEAEADNIHND(::System::String* FCCLIEJAKLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_MEAEADNIHND_OFFSET))(this, FCCLIEJAKLI);
	}

	::System::String* NNONNOFKNAG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_NNONNOFKNAG_OFFSET))(this);
	}

	::System::String* OFEKLEJIKMO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_OFEKLEJIKMO_OFFSET))(this);
	}

	::System::Void HNCJEJBCHAN(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_HNCJEJBCHAN_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Boolean BLKJDELBNNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_BLKJDELBNNB_OFFSET))(this);
	}

	::System::Int32 GEFBPJHBPJJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_GEFBPJHBPJJ_OFFSET))(this);
	}

	::System::Boolean IPDHCDGDLEJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDAKKMNLHA_IPDHCDGDLEJ_OFFSET))(this);
	}
};

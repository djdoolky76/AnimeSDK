#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PJHKDJEGJOG;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MINFFNHBJBP_DKEFBMGMNNM_OFFSET UNITYSDK_OFFSET(0x12168BC0)
#define MINFFNHBJBP_FICPEGCEIDN_OFFSET UNITYSDK_OFFSET(0x121692B0)
#define MINFFNHBJBP_FLCCBMNNLCC_OFFSET UNITYSDK_OFFSET(0x121696B0)
#define MINFFNHBJBP_INGMIDKNLEI_OFFSET UNITYSDK_OFFSET(0x12169EA0)
#define MINFFNHBJBP_IOAKDFGOIKM_OFFSET UNITYSDK_OFFSET(0x121686E0)
#define MINFFNHBJBP_KFHAKBPKDEH_OFFSET UNITYSDK_OFFSET(0x121686A0)
#define MINFFNHBJBP_KLIAKMHEFKF_OFFSET UNITYSDK_OFFSET(0x12168B50)
#define MINFFNHBJBP_LKJBILCILFK_OFFSET UNITYSDK_OFFSET(0x12168D70)
#define MINFFNHBJBP_NFNNHPDLHFK_OFFSET UNITYSDK_OFFSET(0x12168A10)

inline static constexpr unsigned int MINFFNHBJBP_TypeDefinitionIndex = 79827;

class MINFFNHBJBP : public ::System::Object
{
public:
	static ::System::Action** StaticGet_DCNFAOAHKBJ()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MINFFNHBJBP_TypeDefinitionIndex)->GetStaticField(0x365F0);
	}

	static ::System::Boolean KFHAKBPKDEH()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MINFFNHBJBP_KFHAKBPKDEH_OFFSET))();
	}

	static ::System::Void IOAKDFGOIKM(::System::Collections::Generic::List_1<::System::String*>* GCKHBCOJMOO)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MINFFNHBJBP_IOAKDFGOIKM_OFFSET))(GCKHBCOJMOO);
	}

	static ::System::Void NFNNHPDLHFK(::PJHKDJEGJOG* HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PJHKDJEGJOG*))((::PBYTE)hIl2Cpp + MINFFNHBJBP_NFNNHPDLHFK_OFFSET))(HBMGHPEPBNC);
	}

	static ::System::Boolean KLIAKMHEFKF()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MINFFNHBJBP_KLIAKMHEFKF_OFFSET))();
	}

	static ::System::Int32 DKEFBMGMNNM(::System::Int32 CFCGBIMEODL)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MINFFNHBJBP_DKEFBMGMNNM_OFFSET))(CFCGBIMEODL);
	}

	static ::System::Void LKJBILCILFK(::PJHKDJEGJOG* AAOCANGHBDG, ::System::Boolean CCNMHBHKHLN, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PJHKDJEGJOG*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MINFFNHBJBP_LKJBILCILFK_OFFSET))(AAOCANGHBDG, CCNMHBHKHLN, EJGDHCIBCJH);
	}

	static ::System::Void FLCCBMNNLCC(::PJHKDJEGJOG* AAOCANGHBDG, ::System::Boolean CCNMHBHKHLN, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PJHKDJEGJOG*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MINFFNHBJBP_FLCCBMNNLCC_OFFSET))(AAOCANGHBDG, CCNMHBHKHLN, EJGDHCIBCJH);
	}

	static ::System::Void FICPEGCEIDN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MINFFNHBJBP_FICPEGCEIDN_OFFSET))();
	}

	static ::System::Void INGMIDKNLEI(::PJHKDJEGJOG* AAOCANGHBDG, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PJHKDJEGJOG*, ::System::Action*))((::PBYTE)hIl2Cpp + MINFFNHBJBP_INGMIDKNLEI_OFFSET))(AAOCANGHBDG, EJGDHCIBCJH);
	}
};

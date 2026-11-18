#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHOBPPAJKIL.h"

class BACAPKJJCOA_ENHLOAHKKAL;
class EAIOHODECAO;
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BACAPKJJCOA_CLMJCIELJKN_OFFSET UNITYSDK_OFFSET(0x1E8C65B0)
#define BACAPKJJCOA_KFKAIKMLCJN_OFFSET UNITYSDK_OFFSET(0x1E8C5C60)
#define BACAPKJJCOA_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1E8C5BA0)
#define BACAPKJJCOA_NNHAECILILG_OFFSET UNITYSDK_OFFSET(0x1E8C6550)
#define BACAPKJJCOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1E8C5B50)
#define BACAPKJJCOA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1E8C5D20)
#define BACAPKJJCOA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C5BE0)

inline static constexpr unsigned int BACAPKJJCOA_TypeDefinitionIndex = 96492;

class BACAPKJJCOA : public ::MHOBPPAJKIL
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* JKMCDIDPLKK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACAPKJJCOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + BACAPKJJCOA_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACAPKJJCOA_KMMIPNMJILI_OFFSET))(this);
	}

	::BACAPKJJCOA_ENHLOAHKKAL* KFKAIKMLCJN()
	{
		return ((::BACAPKJJCOA_ENHLOAHKKAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACAPKJJCOA_KFKAIKMLCJN_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BACAPKJJCOA_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NNHAECILILG(::BACAPKJJCOA_ENHLOAHKKAL* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::BACAPKJJCOA_ENHLOAHKKAL*))((::PBYTE)hIl2Cpp + BACAPKJJCOA_NNHAECILILG_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void CLMJCIELJKN(::System::UInt32 HBFCDLLPFGK, ::System::Int32 ADFNJNOELMG, ::System::Action* HNCBJEOKEKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + BACAPKJJCOA_CLMJCIELJKN_OFFSET))(this, HBFCDLLPFGK, ADFNJNOELMG, HNCBJEOKEKO);
	}
};

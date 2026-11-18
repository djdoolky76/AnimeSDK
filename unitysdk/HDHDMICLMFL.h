#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EIFGEBDBPDC.h"

class HDHDMICLMFL_JIGIANPENBK;
class HDHDMICLMFL_OABJJENBELJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HDHDMICLMFL_BKGGMJLNNMI_OFFSET UNITYSDK_OFFSET(0x1493F7B0)
#define HDHDMICLMFL_EHIPPCMAIGF_OFFSET UNITYSDK_OFFSET(0x1493F860)
#define HDHDMICLMFL_ENBCEDPDJMF_OFFSET UNITYSDK_OFFSET(0x1493F910)
#define HDHDMICLMFL_FECHKJCAOHN_OFFSET UNITYSDK_OFFSET(0x1493FAC0)
#define HDHDMICLMFL_FOACPDJCFCN_OFFSET UNITYSDK_OFFSET(0x1493FA40)
#define HDHDMICLMFL_KFIEACEMLLE_OFFSET UNITYSDK_OFFSET(0x1493F8B0)
#define HDHDMICLMFL_PBDIANOPNDG_OFFSET UNITYSDK_OFFSET(0x1493FC30)
#define HDHDMICLMFL__CTOR_OFFSET UNITYSDK_OFFSET(0x1493F720)

inline static constexpr unsigned int HDHDMICLMFL_TypeDefinitionIndex = 85934;

class HDHDMICLMFL : public ::System::Object
{
public:
	::HDHDMICLMFL_JIGIANPENBK* IMNAJPCNGBE; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Action*>* MJEHDNPCPNF; // 0x18
	::HDHDMICLMFL_OABJJENBELJ* OLPLBFAFGIH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHDMICLMFL__CTOR_OFFSET))(this);
	}

	::System::Boolean BKGGMJLNNMI(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDHDMICLMFL_BKGGMJLNNMI_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void EHIPPCMAIGF(::HDHDMICLMFL_JIGIANPENBK* ACDGAJJKPKP)
	{
		return ((::System::Void(*)(::PVOID, ::HDHDMICLMFL_JIGIANPENBK*))((::PBYTE)hIl2Cpp + HDHDMICLMFL_EHIPPCMAIGF_OFFSET))(this, ACDGAJJKPKP);
	}

	::System::Boolean KFIEACEMLLE(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDHDMICLMFL_KFIEACEMLLE_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void ENBCEDPDJMF(::System::Int32 BNLHPGHLKDK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDHDMICLMFL_ENBCEDPDJMF_OFFSET))(this, BNLHPGHLKDK);
	}

	::System::Void FOACPDJCFCN(::EIFGEBDBPDC BDJODBNJKJP)
	{
		return ((::System::Void(*)(::PVOID, ::EIFGEBDBPDC))((::PBYTE)hIl2Cpp + HDHDMICLMFL_FOACPDJCFCN_OFFSET))(this, BDJODBNJKJP);
	}

	::System::Void FECHKJCAOHN(::System::Int32 BNLHPGHLKDK, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + HDHDMICLMFL_FECHKJCAOHN_OFFSET))(this, BNLHPGHLKDK, EJGDHCIBCJH);
	}

	::System::Void PBDIANOPNDG(::HDHDMICLMFL_OABJJENBELJ* PLCNILHMICC)
	{
		return ((::System::Void(*)(::PVOID, ::HDHDMICLMFL_OABJJENBELJ*))((::PBYTE)hIl2Cpp + HDHDMICLMFL_PBDIANOPNDG_OFFSET))(this, PLCNILHMICC);
	}
};

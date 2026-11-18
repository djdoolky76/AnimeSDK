#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CEOOCBFJOOH.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define OIOMFDOEHLH_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0x14F868B0)
#define OIOMFDOEHLH_JPPEEOLOGGP_2_OFFSET UNITYSDK_OFFSET(0x14F86950)
#define OIOMFDOEHLH_JPPEEOLOGGP_3_OFFSET UNITYSDK_OFFSET(0x14F869C0)
#define OIOMFDOEHLH_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x14F86830)

inline static constexpr unsigned int OIOMFDOEHLH_TypeDefinitionIndex = 87177;

struct alignas(8) OIOMFDOEHLH
{
	::CEOOCBFJOOH OCOJFKMOKMK; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* HJMOFMLMAOE; // 0x18
	::System::Nullable_1<::System::Boolean> BBELAGJLJBF; // 0x20

	/*
	static ::OIOMFDOEHLH JPPEEOLOGGP(::System::ValueTuple_2<::CEOOCBFJOOH, ::System::String*> EMIKCAHJLGB)
	{
		return ((::OIOMFDOEHLH(*)(::System::ValueTuple_2<::CEOOCBFJOOH, ::System::String*>))((::PBYTE)hIl2Cpp + OIOMFDOEHLH_JPPEEOLOGGP_OFFSET))(EMIKCAHJLGB);
	}
	*/

	/*
	static ::OIOMFDOEHLH JPPEEOLOGGP_1(::System::ValueTuple_3<::CEOOCBFJOOH, ::System::String*, ::System::Boolean> EMIKCAHJLGB)
	{
		return ((::OIOMFDOEHLH(*)(::System::ValueTuple_3<::CEOOCBFJOOH, ::System::String*, ::System::Boolean>))((::PBYTE)hIl2Cpp + OIOMFDOEHLH_JPPEEOLOGGP_1_OFFSET))(EMIKCAHJLGB);
	}
	*/

	/*
	static ::OIOMFDOEHLH JPPEEOLOGGP_2(::CEOOCBFJOOH EMIKCAHJLGB)
	{
		return ((::OIOMFDOEHLH(*)(::CEOOCBFJOOH))((::PBYTE)hIl2Cpp + OIOMFDOEHLH_JPPEEOLOGGP_2_OFFSET))(EMIKCAHJLGB);
	}
	*/

	/*
	static ::OIOMFDOEHLH JPPEEOLOGGP_3(::System::ValueTuple_2<::CEOOCBFJOOH, ::System::Boolean> EMIKCAHJLGB)
	{
		return ((::OIOMFDOEHLH(*)(::System::ValueTuple_2<::CEOOCBFJOOH, ::System::Boolean>))((::PBYTE)hIl2Cpp + OIOMFDOEHLH_JPPEEOLOGGP_3_OFFSET))(EMIKCAHJLGB);
	}
	*/
};

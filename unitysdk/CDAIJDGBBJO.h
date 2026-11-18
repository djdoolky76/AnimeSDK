#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define CDAIJDGBBJO_ACLJAAEEALF_1_OFFSET UNITYSDK_OFFSET(0x1F7D2AA0)
#define CDAIJDGBBJO_ACLJAAEEALF_OFFSET UNITYSDK_OFFSET(0x1F7D2A20)
#define CDAIJDGBBJO_MHGEOBIHECL_OFFSET UNITYSDK_OFFSET(0x1F7D29E0)
#define CDAIJDGBBJO_MMDCBFIGNCH_1_OFFSET UNITYSDK_OFFSET(0x1F7D2990)
#define CDAIJDGBBJO_MMDCBFIGNCH_OFFSET UNITYSDK_OFFSET(0x1F7D28D0)
#define CDAIJDGBBJO_NNOGHEEGHHE_OFFSET UNITYSDK_OFFSET(0x1F7D2BA0)

inline static constexpr unsigned int CDAIJDGBBJO_TypeDefinitionIndex = 8264;

class CDAIJDGBBJO : public ::System::Object
{
public:
	// static const ::System::String* EBFBKKBJLNB; // 0x0

	static ::System::String* MMDCBFIGNCH(::System::UInt32 EFJNFKCBCOD, ::System::Byte DGEJCLFGHBF)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + CDAIJDGBBJO_MMDCBFIGNCH_OFFSET))(EFJNFKCBCOD, DGEJCLFGHBF);
	}

	static ::System::String* MMDCBFIGNCH_1(::System::Int32 EFJNFKCBCOD, ::System::Byte DGEJCLFGHBF)
	{
		return ((::System::String*(*)(::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + CDAIJDGBBJO_MMDCBFIGNCH_1_OFFSET))(EFJNFKCBCOD, DGEJCLFGHBF);
	}

	static ::System::UInt32 MHGEOBIHECL(::System::Int32 EFJNFKCBCOD)
	{
		return ((::System::UInt32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CDAIJDGBBJO_MHGEOBIHECL_OFFSET))(EFJNFKCBCOD);
	}

	static ::System::Int32 ACLJAAEEALF(::System::IO::Stream* CPKODGLINAO)
	{
		return ((::System::Int32(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CDAIJDGBBJO_ACLJAAEEALF_OFFSET))(CPKODGLINAO);
	}

	static ::System::Int32 ACLJAAEEALF_1(::System::String* LCEGOBBEECM)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CDAIJDGBBJO_ACLJAAEEALF_1_OFFSET))(LCEGOBBEECM);
	}

	static ::System::UInt64 NNOGHEEGHHE(::System::String* JHGLEAMPCOM)
	{
		return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + CDAIJDGBBJO_NNOGHEEGHHE_OFFSET))(JHGLEAMPCOM);
	}
};

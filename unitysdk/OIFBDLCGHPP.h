#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class OIFBDLCGHPP_DLMDIKDBOFJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OIFBDLCGHPP_HNABIJCBHNO_OFFSET UNITYSDK_OFFSET(0x1C7CF120)

	class OIFBDLCGHPP : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Int32>* HNABIJCBHNO(::OIFBDLCGHPP_DLMDIKDBOFJ* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Int32>*(*)(::OIFBDLCGHPP_DLMDIKDBOFJ*))((::PBYTE)hIl2Cpp + OIFBDLCGHPP_HNABIJCBHNO_OFFSET))(a1);
		}

	};

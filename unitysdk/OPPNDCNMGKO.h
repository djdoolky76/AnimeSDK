#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPPNDCNMGKO_EAFFFCIIBMF_OFFSET UNITYSDK_OFFSET(0xBFB6B70)
#define OPPNDCNMGKO_FLHPDOLCBDN_OFFSET UNITYSDK_OFFSET(0xBFB6990)

	class OPPNDCNMGKO : public ::System::Object
	{
	public:
		static ::System::Int32 FLHPDOLCBDN(::System::Collections::Generic::List_1<::System::UInt32>* a1, ::System::Func_3<::System::Int32, ::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Func_3<::System::Int32, ::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + OPPNDCNMGKO_FLHPDOLCBDN_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* EAFFFCIIBMF(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + OPPNDCNMGKO_EAFFFCIIBMF_OFFSET))(a1);
		}

	};

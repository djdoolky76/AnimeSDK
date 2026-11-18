#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LIFJPKPNEPO_ADGFLFINKKO_OFFSET UNITYSDK_OFFSET(0x1A312850)
#define LIFJPKPNEPO_ECMAFCPEHDG_OFFSET UNITYSDK_OFFSET(0x1A313230)
#define LIFJPKPNEPO_FFCPIEDHBDP_1_OFFSET UNITYSDK_OFFSET(0x1A3133B0)
#define LIFJPKPNEPO_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x1A312990)

inline static constexpr unsigned int LIFJPKPNEPO_TypeDefinitionIndex = 49362;

class LIFJPKPNEPO : public ::System::Object
{
public:
	static ::System::Boolean ADGFLFINKKO(::System::Int32 OHBCIBJEHHM)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LIFJPKPNEPO_ADGFLFINKKO_OFFSET))(OHBCIBJEHHM);
	}

	static ::System::Boolean FFCPIEDHBDP(::System::Int32 KFOGMHLNBBE, ::System::String*& LBMKOGMDBKH)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LIFJPKPNEPO_FFCPIEDHBDP_OFFSET))(KFOGMHLNBBE, LBMKOGMDBKH);
	}

	static ::System::Boolean ECMAFCPEHDG(::System::Int32 ALPJJEPKFKL, ::System::String*& LBMKOGMDBKH)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + LIFJPKPNEPO_ECMAFCPEHDG_OFFSET))(ALPJJEPKFKL, LBMKOGMDBKH);
	}

	static ::System::Boolean FFCPIEDHBDP_1(::System::Collections::Generic::List_1<::System::Int32>* PPENCKCCHKL, ::System::String*& LBMKOGMDBKH)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::String*&))((::PBYTE)hIl2Cpp + LIFJPKPNEPO_FFCPIEDHBDP_1_OFFSET))(PPENCKCCHKL, LBMKOGMDBKH);
	}
};

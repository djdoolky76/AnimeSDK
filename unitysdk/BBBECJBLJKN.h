#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/IL2CPP/RuntimeServices/BeohmGCActionType.h"
namespace System { class String; }

#define BBBECJBLJKN_ABFCLPGCCFN_OFFSET UNITYSDK_OFFSET(0x15E826C0)
#define BBBECJBLJKN_FCADBFACFLH_OFFSET UNITYSDK_OFFSET(0x15E824C0)
#define BBBECJBLJKN_FKFFBFMGJCF_OFFSET UNITYSDK_OFFSET(0x15E82640)
#define BBBECJBLJKN_FMNJLBHPKOD_OFFSET UNITYSDK_OFFSET(0x15E82500)
#define BBBECJBLJKN_GILFNNCOAEK_OFFSET UNITYSDK_OFFSET(0x15E82480)
#define BBBECJBLJKN_KBFPGKMEJHM_OFFSET UNITYSDK_OFFSET(0x15E82680)
#define BBBECJBLJKN_LJHKKKIIKNP_OFFSET UNITYSDK_OFFSET(0x15E82440)
#define BBBECJBLJKN_LLFNNGPLIJB_OFFSET UNITYSDK_OFFSET(0x15E82570)
#define BBBECJBLJKN_OLOGNLEKNBE_OFFSET UNITYSDK_OFFSET(0x15E825D0)

inline static constexpr unsigned int BBBECJBLJKN_TypeDefinitionIndex = 50030;

	class BBBECJBLJKN : public ::System::Object
	{
	public:
		static ::System::Int32 LJHKKKIIKNP()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BBBECJBLJKN_LJHKKKIIKNP_OFFSET))();
		}

		static ::Unity::IL2CPP::RuntimeServices::BeohmGCActionType GILFNNCOAEK(::System::Int32 a1)
		{
			return ((::Unity::IL2CPP::RuntimeServices::BeohmGCActionType(*)(::System::Int32))((::PBYTE)hIl2Cpp + BBBECJBLJKN_GILFNNCOAEK_OFFSET))(a1);
		}

		static ::System::Int32 FCADBFACFLH()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + BBBECJBLJKN_FCADBFACFLH_OFFSET))();
		}

		static ::System::Boolean FMNJLBHPKOD(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::Int64 a6)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + BBBECJBLJKN_FMNJLBHPKOD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean LLFNNGPLIJB(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + BBBECJBLJKN_LLFNNGPLIJB_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean OLOGNLEKNBE(::System::Int32 a1, ::System::Int32 a2, ::System::Int64 a3, ::System::Int64 a4, ::System::Int64 a5, ::System::Int64 a6)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + BBBECJBLJKN_OLOGNLEKNBE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::String* FKFFBFMGJCF()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + BBBECJBLJKN_FKFFBFMGJCF_OFFSET))();
		}

		static ::System::Void KBFPGKMEJHM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + BBBECJBLJKN_KBFPGKMEJHM_OFFSET))(a1);
		}

		static ::System::Void ABFCLPGCCFN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BBBECJBLJKN_ABFCLPGCCFN_OFFSET))(a1);
		}

	};

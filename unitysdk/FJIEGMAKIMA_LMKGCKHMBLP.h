#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJIEGMAKIMA;
class FJIEGMAKIMA_DFFGFGJNPMP;
class FJIEGMAKIMA_EDPIDFIGIIE;
namespace RPG::GameCore { class TrainPartyPerformance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FJIEGMAKIMA_LMKGCKHMBLP_BOLMCNBIAAO_OFFSET UNITYSDK_OFFSET(0x157CC2B0)
#define FJIEGMAKIMA_LMKGCKHMBLP_CPMMMOCPGCB_OFFSET UNITYSDK_OFFSET(0x157CDBD0)
#define FJIEGMAKIMA_LMKGCKHMBLP_CTOR_OFFSET UNITYSDK_OFFSET(0x157C90F0)
#define FJIEGMAKIMA_LMKGCKHMBLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157C60A0)
#define FJIEGMAKIMA_LMKGCKHMBLP_ECNBMNNFHGN_OFFSET UNITYSDK_OFFSET(0x157CC640)
#define FJIEGMAKIMA_LMKGCKHMBLP_HEEMIIBNCBJ_OFFSET UNITYSDK_OFFSET(0x157CCEA0)
#define FJIEGMAKIMA_LMKGCKHMBLP_IFCPBMAFDFP_OFFSET UNITYSDK_OFFSET(0x157CDC60)
#define FJIEGMAKIMA_LMKGCKHMBLP_NPDJOGOINON_OFFSET UNITYSDK_OFFSET(0x157CC8D0)
#define FJIEGMAKIMA_LMKGCKHMBLP_PIECNBDOBIM_1_OFFSET UNITYSDK_OFFSET(0x157CBC90)
#define FJIEGMAKIMA_LMKGCKHMBLP_PIECNBDOBIM_OFFSET UNITYSDK_OFFSET(0x157CB340)

inline static constexpr unsigned int FJIEGMAKIMA_LMKGCKHMBLP_TypeDefinitionIndex = 60229;

	class FJIEGMAKIMA_LMKGCKHMBLP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Il2CppArray<::System::Object*>*>* IFLJFKMJIMO; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* EMPNOGKHOIP; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* CJINCEFNHMJ; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* NMMHJPOOPEB; // 0x28
		::FJIEGMAKIMA* CPIIOIPAAKK; // 0x30
		// static const ::System::Object AOIJCJPPKJE; // 0x0
		::System::Void _ctor(::FJIEGMAKIMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJIEGMAKIMA*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_DISPOSE_OFFSET))(this);
		}

		::System::Boolean ECNBMNNFHGN(::FJIEGMAKIMA_DFFGFGJNPMP* a1, ::RPG::GameCore::TrainPartyPerformance* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJIEGMAKIMA_DFFGFGJNPMP*, ::RPG::GameCore::TrainPartyPerformance*, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_ECNBMNNFHGN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NPDJOGOINON(::FJIEGMAKIMA_DFFGFGJNPMP* a1, ::System::String* a2, ::FJIEGMAKIMA_EDPIDFIGIIE* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJIEGMAKIMA_DFFGFGJNPMP*, ::System::String*, ::FJIEGMAKIMA_EDPIDFIGIIE*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_NPDJOGOINON_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HEEMIIBNCBJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_HEEMIIBNCBJ_OFFSET))(this, a1);
		}

		::System::Boolean PIECNBDOBIM(::System::UInt32 a1, ::RPG::GameCore::TrainPartyPerformance* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TrainPartyPerformance*, ::System::Object*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_PIECNBDOBIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PIECNBDOBIM_1(::System::UInt32 a1, ::RPG::GameCore::TrainPartyPerformance* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::TrainPartyPerformance*, ::System::Object*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_PIECNBDOBIM_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean BOLMCNBIAAO(::FJIEGMAKIMA_DFFGFGJNPMP* a1, ::RPG::GameCore::TrainPartyPerformance* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJIEGMAKIMA_DFFGFGJNPMP*, ::RPG::GameCore::TrainPartyPerformance*))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_BOLMCNBIAAO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* CPMMMOCPGCB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_CPMMMOCPGCB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* IFCPBMAFDFP(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FJIEGMAKIMA_LMKGCKHMBLP_IFCPBMAFDFP_OFFSET))(this, a1);
		}

	};

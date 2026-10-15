#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJFAHBINDIN;
namespace RPG::GameCore { class AIDecisionUnitConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KHJOBJJNMNH_BAJAGKKPFLD_OFFSET UNITYSDK_OFFSET(0xB40B540)
#define KHJOBJJNMNH_BPGOJKLMKLD_OFFSET UNITYSDK_OFFSET(0xB40B610)
#define KHJOBJJNMNH_CCTOR_OFFSET UNITYSDK_OFFSET(0xB40B6B0)
#define KHJOBJJNMNH_DBALBHLKFBM_OFFSET UNITYSDK_OFFSET(0xB40B2D0)
#define KHJOBJJNMNH_LNKHMLAEOBJ_OFFSET UNITYSDK_OFFSET(0xB40B430)

inline static constexpr unsigned int KHJOBJJNMNH_TypeDefinitionIndex = 54328;

	class KHJOBJJNMNH : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_IJGFMIOCIOK()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "KHJOBJJNMNH")->GetStaticField(0x54040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHJOBJJNMNH_CCTOR_OFFSET))();
		}

		static ::EJFAHBINDIN* DBALBHLKFBM(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::EJFAHBINDIN*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KHJOBJJNMNH_DBALBHLKFBM_OFFSET))(a1, a2);
		}

		static ::EJFAHBINDIN* LNKHMLAEOBJ(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::EJFAHBINDIN*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KHJOBJJNMNH_LNKHMLAEOBJ_OFFSET))(a1, a2);
		}

		static ::EJFAHBINDIN* BAJAGKKPFLD(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::EJFAHBINDIN*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KHJOBJJNMNH_BAJAGKKPFLD_OFFSET))(a1, a2);
		}

		static ::EJFAHBINDIN* BPGOJKLMKLD(::RPG::GameCore::AIDecisionUnitConfig* a1, ::RPG::GameCore::TaskContext* a2)
		{
			return ((::EJFAHBINDIN*(*)(::RPG::GameCore::AIDecisionUnitConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + KHJOBJJNMNH_BPGOJKLMKLD_OFFSET))(a1, a2);
		}

	};

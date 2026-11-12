#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRichTextNodeCompiler.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/PKHNHEBKPPI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BAFCAJNDAOJ;
class DNGMCNPJHBJ;
class FIMAFJNMOGM;
class FMKEJLGKEMH;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace RPG::Client { class GridFightSpecialModifyConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Text { class StringBuilder; }

#define HKEOJOEPPEF_COMPILE_OFFSET UNITYSDK_OFFSET(0x16C96190)
#define HKEOJOEPPEF_CTOR_OFFSET UNITYSDK_OFFSET(0x16C95710)
#define HKEOJOEPPEF_FGEPHBCGEGM_OFFSET UNITYSDK_OFFSET(0x16C963A0)
#define HKEOJOEPPEF_FHJMEAILNKF_OFFSET UNITYSDK_OFFSET(0x16C976C0)
#define HKEOJOEPPEF_GET_TAG_OFFSET UNITYSDK_OFFSET(0x16C956A0)
#define HKEOJOEPPEF_IEKMHPNOPDP_OFFSET UNITYSDK_OFFSET(0x16C95AE0)
#define HKEOJOEPPEF_ILCDGAKMHKG_OFFSET UNITYSDK_OFFSET(0x16C97510)
#define HKEOJOEPPEF_KEGDJIOELNL_OFFSET UNITYSDK_OFFSET(0x16C96870)
#define HKEOJOEPPEF_MNGJDHNGBML_OFFSET UNITYSDK_OFFSET(0x16C97150)
#define HKEOJOEPPEF_NIFLAJKLOPC_OFFSET UNITYSDK_OFFSET(0x16C95FF0)
#define HKEOJOEPPEF_OHFDDGKAJPO_OFFSET UNITYSDK_OFFSET(0x16C96CA0)
#define HKEOJOEPPEF_OLFBPGMFFGO_OFFSET UNITYSDK_OFFSET(0x16C96DC0)
#define HKEOJOEPPEF_PDOCHDIGHIK_OFFSET UNITYSDK_OFFSET(0x16C962C0)
#define HKEOJOEPPEF_POSTPROCESS_OFFSET UNITYSDK_OFFSET(0x16C957B0)

inline static constexpr unsigned int HKEOJOEPPEF_TypeDefinitionIndex = 67058;

	class HKEOJOEPPEF : public ::RPG::Client::GridFightRichTextNodeCompiler
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Queue_1<::System::String*>*>* IBIHJJMBBKN; // 0x10
		::RPG::Client::GridFightRoleSkillDetail* NJFFGCELHIM; // 0x18
		::System::Void _ctor(::RPG::Client::GridFightRoleSkillDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Tag()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_GET_TAG_OFFSET))(this);
		}

		::System::String* PostProcess(::System::String* a1, ::System::Object* a2, ::FIMAFJNMOGM* a3, ::PKHNHEBKPPI a4)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::FIMAFJNMOGM*, ::PKHNHEBKPPI))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_POSTPROCESS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Compile(::FMKEJLGKEMH* a1, ::DNGMCNPJHBJ* a2)
		{
			return ((::System::String*(*)(::PVOID, ::FMKEJLGKEMH*, ::DNGMCNPJHBJ*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_COMPILE_OFFSET))(this, a1, a2);
		}

		::System::Void FGEPHBCGEGM(::System::Text::StringBuilder* a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_FGEPHBCGEGM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KEGDJIOELNL(::System::Text::StringBuilder* a1, ::System::UInt32 a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_KEGDJIOELNL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MNGJDHNGBML(::RPG::Client::GridFightSpecialModifyConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightSpecialModifyConfig*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_MNGJDHNGBML_OFFSET))(this, a1);
		}

		static ::System::Boolean FHJMEAILNKF(::RPG::Client::GridFightRole* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::GridFightRole*, ::System::UInt32))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_FHJMEAILNKF_OFFSET))(a1, a2);
		}

		::RPG::GameCore::FixPoint ILCDGAKMHKG(::RPG::Client::GridFightSpecialModifyConfig* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::Client::GridFightSpecialModifyConfig*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_ILCDGAKMHKG_OFFSET))(this, a1);
		}

		static ::System::Boolean OHFDDGKAJPO(::Il2CppArray<::System::UInt32>* a1, ::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::System::UInt32 a4, ::RPG::GameCore::FixPoint a5, ::RPG::GameCore::ModifyCalcOpType a6, ::RPG::GameCore::FixPoint a7)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>*, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::ModifyCalcOpType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_OHFDDGKAJPO_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::String* OLFBPGMFFGO(::RPG::GameCore::ModifyCalcOpType a1, ::RPG::GameCore::FixPoint a2, ::System::String* a3)
		{
			return ((::System::String*(*)(::RPG::GameCore::ModifyCalcOpType, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_OLFBPGMFFGO_OFFSET))(a1, a2, a3);
		}

		::System::Void NIFLAJKLOPC(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_NIFLAJKLOPC_OFFSET))(this, a1, a2);
		}

		::System::String* PDOCHDIGHIK(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_PDOCHDIGHIK_OFFSET))(this, a1);
		}

		static ::System::String* IEKMHPNOPDP(::BAFCAJNDAOJ* a1)
		{
			return ((::System::String*(*)(::BAFCAJNDAOJ*))((::PBYTE)hIl2Cpp + HKEOJOEPPEF_IEKMHPNOPDP_OFFSET))(a1);
		}

	};

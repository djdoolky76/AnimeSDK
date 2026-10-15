#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLKHCMABFLO;
class EANJILGOKBE;
class FAOGNFIIOBL;
class IJDDCKJFGLB;
class IOIIFAENPNH;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAOGNFIIOBL_AKGNAEPIFIA_OFFSET UNITYSDK_OFFSET(0x15688A20)
#define FAOGNFIIOBL_BKOKDMJJKOO_OFFSET UNITYSDK_OFFSET(0x15688540)
#define FAOGNFIIOBL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15687960)
#define FAOGNFIIOBL_CTOR_OFFSET UNITYSDK_OFFSET(0x15687A70)
#define FAOGNFIIOBL_FLOCOBNPFAN_OFFSET UNITYSDK_OFFSET(0x15688B30)
#define FAOGNFIIOBL_GCBPLGBAOCH_OFFSET UNITYSDK_OFFSET(0x15687B20)
#define FAOGNFIIOBL_HPCACOGDHBJ_OFFSET UNITYSDK_OFFSET(0x15687C50)
#define FAOGNFIIOBL_KBFANNOBIGD_OFFSET UNITYSDK_OFFSET(0x15688AC0)
#define FAOGNFIIOBL_KBFBCLMPDFF_OFFSET UNITYSDK_OFFSET(0x15688C10)
#define FAOGNFIIOBL_LJGCODNKAAK_OFFSET UNITYSDK_OFFSET(0x15687C00)
#define FAOGNFIIOBL_LPLCDBGHGLE_OFFSET UNITYSDK_OFFSET(0x15688DE0)
#define FAOGNFIIOBL_MPDKOFOKBGD_OFFSET UNITYSDK_OFFSET(0x15688860)
#define FAOGNFIIOBL_NODADPBPCFP_OFFSET UNITYSDK_OFFSET(0x15687BB0)
#define FAOGNFIIOBL_OOKINEOJJEI_OFFSET UNITYSDK_OFFSET(0x15688A70)

inline static constexpr unsigned int FAOGNFIIOBL_TypeDefinitionIndex = 72073;

	class FAOGNFIIOBL : public ::System::Object
	{
	public:
		::CLKHCMABFLO* MMCJKLFGIMB; // 0x10
		::System::Collections::Generic::List_1<::EANJILGOKBE*>* MDDACIFNPCK; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::System::Collections::Generic::List_1<::EANJILGOKBE*>* MGGPCEGPFHH; // 0x28
		::IJDDCKJFGLB* IIJGMKEKLIN; // 0x30
		// static const ::System::Object EJINEKOAMPF; // 0x0
		// static const ::System::Object KCMODNPENAC; // 0x0
		// static const ::System::Object EFGFOFEKEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_CTOR_OFFSET))(this);
		}

		static ::FAOGNFIIOBL* BPLPBPMEODA(::CLKHCMABFLO* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::FAOGNFIIOBL*(*)(::CLKHCMABFLO*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GCBPLGBAOCH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_GCBPLGBAOCH_OFFSET))(this, a1);
		}

		::IJDDCKJFGLB* LJGCODNKAAK()
		{
			return ((::IJDDCKJFGLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_LJGCODNKAAK_OFFSET))(this);
		}

		::System::Void MPDKOFOKBGD(::EANJILGOKBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_MPDKOFOKBGD_OFFSET))(this, a1);
		}

		::System::Boolean KBFANNOBIGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_KBFANNOBIGD_OFFSET))(this);
		}

		::System::Void NODADPBPCFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_NODADPBPCFP_OFFSET))(this);
		}

		::System::Void HPCACOGDHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_HPCACOGDHBJ_OFFSET))(this);
		}

		::System::Void BKOKDMJJKOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_BKOKDMJJKOO_OFFSET))(this);
		}

		::System::Void FLOCOBNPFAN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_FLOCOBNPFAN_OFFSET))(this, a1, a2);
		}

		::System::Void KBFBCLMPDFF(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_KBFBCLMPDFF_OFFSET))(this, a1, a2);
		}

		::System::Void LPLCDBGHGLE(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_LPLCDBGHGLE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::IOIIFAENPNH*>* AKGNAEPIFIA()
		{
			return ((::System::Collections::Generic::List_1<::IOIIFAENPNH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_AKGNAEPIFIA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IOIIFAENPNH*>* OOKINEOJJEI()
		{
			return ((::System::Collections::Generic::List_1<::IOIIFAENPNH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOGNFIIOBL_OOKINEOJJEI_OFFSET))(this);
		}

	};

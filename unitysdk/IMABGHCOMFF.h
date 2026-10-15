#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CIGLFKLHBGD.h"
class NINEMEMDNBK;
namespace System { class Random; }
namespace System { class String; }

#define IMABGHCOMFF_AAACJMLFNMM_OFFSET UNITYSDK_OFFSET(0x1C472A10)
#define IMABGHCOMFF_ABPFENDKAME_OFFSET UNITYSDK_OFFSET(0x1C473440)
#define IMABGHCOMFF_ADAJBOAFNNB_OFFSET UNITYSDK_OFFSET(0x1C472B80)
#define IMABGHCOMFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4742B0)
#define IMABGHCOMFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C474250)
#define IMABGHCOMFF_FGDKCJPMBEG_OFFSET UNITYSDK_OFFSET(0x1C474040)
#define IMABGHCOMFF_GCDOMBALANG_OFFSET UNITYSDK_OFFSET(0x1C4741D0)
#define IMABGHCOMFF_HCGIKFPKLOE_OFFSET UNITYSDK_OFFSET(0x1C472A00)
#define IMABGHCOMFF_NJEIKCMMJPG_OFFSET UNITYSDK_OFFSET(0x1C473F10)
#define IMABGHCOMFF_OCNMECOOLON_OFFSET UNITYSDK_OFFSET(0x1C473E10)

inline static constexpr unsigned int IMABGHCOMFF_TypeDefinitionIndex = 41517;

	class IMABGHCOMFF : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* GMIODKLGJHD; // 0x10
		::NINEMEMDNBK* DCOPELFHOLO; // 0x18
		::Il2CppArray<::System::UInt32>* EMKFBDEACMI; // 0x20
		::System::Boolean HKMGIBJNCFE; // 0x28
		::System::Boolean BANLOOPBKLF; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 CMFNKDKKGGI; // 0x2C
		::System::Double MDDJDEINLPM; // 0x30
		static ::System::Random** StaticGet_OLEEIPHBJKB()
		{
			return (::System::Random**)UnitySDK::FromName("", "IMABGHCOMFF")->GetStaticField(0x1AC10);
		}

		static ::System::UInt32* StaticGet_MMIPPDHLFFC()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "IMABGHCOMFF")->GetStaticField(0x5D70);
		}

		static ::System::Boolean* StaticGet_FKDBKPHFEKF()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "IMABGHCOMFF")->GetStaticField(0x5D74);
		}

		// static const ::System::Object HAMBMFPEOOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMABGHCOMFF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMABGHCOMFF_CCTOR_OFFSET))();
		}

		::NINEMEMDNBK* HCGIKFPKLOE()
		{
			return ((::NINEMEMDNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMABGHCOMFF_HCGIKFPKLOE_OFFSET))(this);
		}

		::System::Void AAACJMLFNMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMABGHCOMFF_AAACJMLFNMM_OFFSET))(this);
		}

		::System::Boolean ADAJBOAFNNB(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IMABGHCOMFF_ADAJBOAFNNB_OFFSET))(this, a1);
		}

		::System::Boolean OCNMECOOLON(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IMABGHCOMFF_OCNMECOOLON_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NJEIKCMMJPG(::Il2CppArray<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + IMABGHCOMFF_NJEIKCMMJPG_OFFSET))(this, a1, a2);
		}

		::System::Int32 FGDKCJPMBEG(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IMABGHCOMFF_FGDKCJPMBEG_OFFSET))(this, a1, a2);
		}

		::System::String* GCDOMBALANG(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMABGHCOMFF_GCDOMBALANG_OFFSET))(this, a1);
		}

		::System::Void ABPFENDKAME(::System::Int32 a1, ::Il2CppArray<::CIGLFKLHBGD>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::CIGLFKLHBGD>*))((::PBYTE)hIl2Cpp + IMABGHCOMFF_ABPFENDKAME_OFFSET))(this, a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class OBKMGFPLJGB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::IO::MemoryMappedFiles { class MemoryMappedFile; }

#define OBKMGFPLJGB_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1EC0D8F0)
#define OBKMGFPLJGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC0D8B0)
#define OBKMGFPLJGB_DGFEHNABKCA_OFFSET UNITYSDK_OFFSET(0x1EC0E3D0)
#define OBKMGFPLJGB_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x1EC0D820)
#define OBKMGFPLJGB_IIGOBJCNOAC_OFFSET UNITYSDK_OFFSET(0x1EC0DE20)
#define OBKMGFPLJGB_LDCGNGDPGAM_OFFSET UNITYSDK_OFFSET(0x1EC0DCA0)
#define OBKMGFPLJGB_NLMGPLDLEMN_OFFSET UNITYSDK_OFFSET(0x1EC0E460)

inline static constexpr unsigned int OBKMGFPLJGB_TypeDefinitionIndex = 35181;

	class OBKMGFPLJGB : public ::System::Object
	{
	public:
		::System::Collections::Generic::SortedList_2<::System::String*, ::System::ValueTuple_2<::System::IO::MemoryMappedFiles::MemoryMappedFile*, ::System::Int32>>* LKEAPHDFKGJ; // 0x10
		static ::OBKMGFPLJGB** StaticGet_EMLNOINPICJ()
		{
			return (::OBKMGFPLJGB**)UnitySDK::FromName("", "OBKMGFPLJGB")->GetStaticField(0x552E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKMGFPLJGB_CTOR_OFFSET))(this);
		}

		static ::OBKMGFPLJGB* GGBLHEHJBDO()
		{
			return ((::OBKMGFPLJGB*(*)())((::PBYTE)hIl2Cpp + OBKMGFPLJGB_GGBLHEHJBDO_OFFSET))();
		}

		::System::IO::MemoryMappedFiles::MemoryMappedFile* ACMKLFOMPFC(::System::String* a1)
		{
			return ((::System::IO::MemoryMappedFiles::MemoryMappedFile*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBKMGFPLJGB_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void LDCGNGDPGAM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBKMGFPLJGB_LDCGNGDPGAM_OFFSET))(this, a1);
		}

		::System::Void IIGOBJCNOAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKMGFPLJGB_IIGOBJCNOAC_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* DGFEHNABKCA()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKMGFPLJGB_DGFEHNABKCA_OFFSET))(this);
		}

		::System::Boolean NLMGPLDLEMN(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OBKMGFPLJGB_NLMGPLDLEMN_OFFSET))(this, a1);
		}

	};

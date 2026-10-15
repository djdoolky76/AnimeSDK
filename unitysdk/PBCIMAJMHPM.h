#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class HCFLAPPBPOP;
class LIKNJLCIAGI;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PBCIMAJMHPM_BKKMOAEFCKG_1_OFFSET UNITYSDK_OFFSET(0xBFDA6D0)
#define PBCIMAJMHPM_BKKMOAEFCKG_OFFSET UNITYSDK_OFFSET(0xBFDA5D0)
#define PBCIMAJMHPM_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFDB050)
#define PBCIMAJMHPM_CJBBIPGADFA_OFFSET UNITYSDK_OFFSET(0xBFDAB10)
#define PBCIMAJMHPM_ECAMENNGJPG_OFFSET UNITYSDK_OFFSET(0xBFDADE0)
#define PBCIMAJMHPM_EDMOBENDDJK_OFFSET UNITYSDK_OFFSET(0xBFDAA60)
#define PBCIMAJMHPM_GET_REPLAYFILEPATH_OFFSET UNITYSDK_OFFSET(0xBFDA8E0)
#define PBCIMAJMHPM_GET_SCREENDEBUGLOGOWNERID_OFFSET UNITYSDK_OFFSET(0xBFDA9A0)
#define PBCIMAJMHPM_IAKHCMHDHGE_OFFSET UNITYSDK_OFFSET(0xBFDA7B0)
#define PBCIMAJMHPM_LNDHDLHHGOM_OFFSET UNITYSDK_OFFSET(0xBFDAC70)
#define PBCIMAJMHPM_NBKJMGEOKNK_OFFSET UNITYSDK_OFFSET(0xBFDAF70)
#define PBCIMAJMHPM_NJPBAMCKACJ_OFFSET UNITYSDK_OFFSET(0xBFDA860)
#define PBCIMAJMHPM_SET_REPLAYFILEPATH_OFFSET UNITYSDK_OFFSET(0xBFDA940)
#define PBCIMAJMHPM_SET_SCREENDEBUGLOGOWNERID_OFFSET UNITYSDK_OFFSET(0xBFDAA00)

inline static constexpr unsigned int PBCIMAJMHPM_TypeDefinitionIndex = 76430;

	class PBCIMAJMHPM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_FFNIDFJHMPG()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "PBCIMAJMHPM")->GetStaticField(0x594C0);
		}

		static ::System::String** StaticGet__ReplayFilePath_k__BackingField()
		{
			return (::System::String**)UnitySDK::FromName("", "PBCIMAJMHPM")->GetStaticField(0x594C8);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_LPJPDBDJEAP()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "PBCIMAJMHPM")->GetStaticField(0x594D0);
		}

		static ::System::Int32* StaticGet__ScreenDebugLogOwnerID_k__BackingField()
		{
			return (::System::Int32*)UnitySDK::FromName("", "PBCIMAJMHPM")->GetStaticField(0x13550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBCIMAJMHPM_CCTOR_OFFSET))();
		}

		static ::LIKNJLCIAGI* BKKMOAEFCKG(::UnityEngine::Vector3 a1, ::System::UInt64 a2)
		{
			return ((::LIKNJLCIAGI*(*)(::UnityEngine::Vector3, ::System::UInt64))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_BKKMOAEFCKG_OFFSET))(a1, a2);
		}

		static ::LIKNJLCIAGI* BKKMOAEFCKG_1(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3Int a3, ::System::UInt64 a4)
		{
			return ((::LIKNJLCIAGI*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3Int, ::System::UInt64))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_BKKMOAEFCKG_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::HCFLAPPBPOP* IAKHCMHDHGE()
		{
			return ((::HCFLAPPBPOP*(*)())((::PBYTE)hIl2Cpp + PBCIMAJMHPM_IAKHCMHDHGE_OFFSET))();
		}

		static ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* NJPBAMCKACJ()
		{
			return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + PBCIMAJMHPM_NJPBAMCKACJ_OFFSET))();
		}

		static ::System::String* get_ReplayFilePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + PBCIMAJMHPM_GET_REPLAYFILEPATH_OFFSET))();
		}

		static ::System::Void set_ReplayFilePath(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_SET_REPLAYFILEPATH_OFFSET))(a1);
		}

		static ::System::Int32 get_ScreenDebugLogOwnerID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + PBCIMAJMHPM_GET_SCREENDEBUGLOGOWNERID_OFFSET))();
		}

		static ::System::Void set_ScreenDebugLogOwnerID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_SET_SCREENDEBUGLOGOWNERID_OFFSET))(a1);
		}

		static ::System::Boolean EDMOBENDDJK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_EDMOBENDDJK_OFFSET))(a1);
		}

		static ::System::Void CJBBIPGADFA(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_CJBBIPGADFA_OFFSET))(a1, a2);
		}

		static ::System::String* LNDHDLHHGOM(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_LNDHDLHHGOM_OFFSET))(a1);
		}

		static ::System::Void ECAMENNGJPG(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_ECAMENNGJPG_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean NBKJMGEOKNK(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + PBCIMAJMHPM_NBKJMGEOKNK_OFFSET))(a1, a2);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }

#define AFDGEBOPHLG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD0B010)
#define AFDGEBOPHLG_DDMNGNFIGAK_OFFSET UNITYSDK_OFFSET(0x1DD0A7F0)
#define AFDGEBOPHLG_EKAFDGOAGLJ_OFFSET UNITYSDK_OFFSET(0x1DD0A6F0)
#define AFDGEBOPHLG_JDABGFMCGAH_OFFSET UNITYSDK_OFFSET(0x1DD0AB80)

inline static constexpr unsigned int AFDGEBOPHLG_TypeDefinitionIndex = 6270;

	class AFDGEBOPHLG : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_ACPMKNOOMHF()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "AFDGEBOPHLG")->GetStaticField(0x207A0);
		}

		static ::Il2CppArray<::System::Single>** StaticGet_EHJGKDIFINJ()
		{
			return (::Il2CppArray<::System::Single>**)UnitySDK::FromName("", "AFDGEBOPHLG")->GetStaticField(0x207A8);
		}

		// static const ::System::Object IPLDFDAGKGK; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFDGEBOPHLG_CCTOR_OFFSET))();
		}

		static ::System::Single EKAFDGOAGLJ(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + AFDGEBOPHLG_EKAFDGOAGLJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single DDMNGNFIGAK(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + AFDGEBOPHLG_DDMNGNFIGAK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single JDABGFMCGAH(::System::Func_2<::System::Single, ::System::Single>* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::System::Func_2<::System::Single, ::System::Single>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AFDGEBOPHLG_JDABGFMCGAH_OFFSET))(a1, a2, a3);
		}

	};

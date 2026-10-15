#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMCLELAGNEE;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define EOOMOGCAAPH_DPJKIPLDHJP_OFFSET UNITYSDK_OFFSET(0x155C1560)
#define EOOMOGCAAPH_EIBOLBMOCFK_OFFSET UNITYSDK_OFFSET(0x155C1100)
#define EOOMOGCAAPH_FDGJIPLJAPG_OFFSET UNITYSDK_OFFSET(0x155C1030)
#define EOOMOGCAAPH_IAIKAMKFIPD_OFFSET UNITYSDK_OFFSET(0x155C11F0)
#define EOOMOGCAAPH_IOABNDKGKEI_OFFSET UNITYSDK_OFFSET(0x155C1260)
#define EOOMOGCAAPH_KHMKELBNLBL_OFFSET UNITYSDK_OFFSET(0x155C13E0)
#define EOOMOGCAAPH_MLLCBGMMKNP_OFFSET UNITYSDK_OFFSET(0x155C0F60)
#define EOOMOGCAAPH_PNNDHGHAHLC_OFFSET UNITYSDK_OFFSET(0x155C0EE0)

inline static constexpr unsigned int EOOMOGCAAPH_TypeDefinitionIndex = 62800;

	class EOOMOGCAAPH : public ::System::Object
	{
	public:
		static ::MMCLELAGNEE* PNNDHGHAHLC(::MMCLELAGNEE* a1, ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::MMCLELAGNEE*(*)(::MMCLELAGNEE*, ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + EOOMOGCAAPH_PNNDHGHAHLC_OFFSET))(a1, a2, a3);
		}

		static ::MMCLELAGNEE* MLLCBGMMKNP(::MMCLELAGNEE* a1, ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>* a2)
		{
			return ((::MMCLELAGNEE*(*)(::MMCLELAGNEE*, ::System::Func_2<::RPG::AvatarSystem::IAvatar*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH_MLLCBGMMKNP_OFFSET))(a1, a2);
		}

		static ::MMCLELAGNEE* FDGJIPLJAPG(::MMCLELAGNEE* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* a2)
		{
			return ((::MMCLELAGNEE*(*)(::MMCLELAGNEE*, ::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH_FDGJIPLJAPG_OFFSET))(a1, a2);
		}

		static ::MMCLELAGNEE* EIBOLBMOCFK(::MMCLELAGNEE* a1)
		{
			return ((::MMCLELAGNEE*(*)(::MMCLELAGNEE*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH_EIBOLBMOCFK_OFFSET))(a1);
		}

		static ::MMCLELAGNEE* IAIKAMKFIPD(::MMCLELAGNEE* a1)
		{
			return ((::MMCLELAGNEE*(*)(::MMCLELAGNEE*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH_IAIKAMKFIPD_OFFSET))(a1);
		}

		static ::MMCLELAGNEE* IOABNDKGKEI(::MMCLELAGNEE* a1)
		{
			return ((::MMCLELAGNEE*(*)(::MMCLELAGNEE*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH_IOABNDKGKEI_OFFSET))(a1);
		}

		static ::MMCLELAGNEE* KHMKELBNLBL(::MMCLELAGNEE* a1)
		{
			return ((::MMCLELAGNEE*(*)(::MMCLELAGNEE*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH_KHMKELBNLBL_OFFSET))(a1);
		}

		static ::MMCLELAGNEE* DPJKIPLDHJP(::MMCLELAGNEE* a1)
		{
			return ((::MMCLELAGNEE*(*)(::MMCLELAGNEE*))((::PBYTE)hIl2Cpp + EOOMOGCAAPH_DPJKIPLDHJP_OFFSET))(a1);
		}

	};

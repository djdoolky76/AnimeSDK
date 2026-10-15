#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;
class MCDOIAPPMBF;
namespace System { class Object; }
namespace System { class String; }

#define PCLDJLBJKGP_CTOR_OFFSET UNITYSDK_OFFSET(0xC002CB0)
#define PCLDJLBJKGP_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0xC002E20)
#define PCLDJLBJKGP_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xC002CC0)
#define PCLDJLBJKGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC003050)

inline static constexpr unsigned int PCLDJLBJKGP_TypeDefinitionIndex = 82137;

	class PCLDJLBJKGP : public ::System::Object
	{
	public:
		::MCDOIAPPMBF* ENMLHGPNLNC; // 0x10
		::System::Void _ctor(::MCDOIAPPMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + PCLDJLBJKGP_CTOR_OFFSET))(this, a1);
		}

		::System::Object* KFGJEKJHIMB()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLDJLBJKGP_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + PCLDJLBJKGP_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLDJLBJKGP_TOSTRING_OFFSET))(this);
		}

	};

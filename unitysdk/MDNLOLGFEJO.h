#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJIBOGDPPCA;
namespace System { class String; }

#define MDNLOLGFEJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AD9F0)
#define MDNLOLGFEJO_GET_ID_OFFSET UNITYSDK_OFFSET(0xB8AD9C0)
#define MDNLOLGFEJO_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB8AD9D0)
#define MDNLOLGFEJO_GET_MOTIONID_OFFSET UNITYSDK_OFFSET(0xB8AD9E0)

inline static constexpr unsigned int MDNLOLGFEJO_TypeDefinitionIndex = 80126;

	class MDNLOLGFEJO : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::UInt32 _MotionID_k__BackingField; // 0x1C
		::System::Void _ctor(::LJIBOGDPPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJIBOGDPPCA*))((::PBYTE)hIl2Cpp + MDNLOLGFEJO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNLOLGFEJO_GET_ID_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNLOLGFEJO_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::UInt32 get_MotionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNLOLGFEJO_GET_MOTIONID_OFFSET))(this);
		}

	};

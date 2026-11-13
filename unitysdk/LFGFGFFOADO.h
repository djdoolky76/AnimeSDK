#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBKGNHKJOPJ;
namespace System { class String; }

#define LFGFGFFOADO_CTOR_OFFSET UNITYSDK_OFFSET(0x18C48240)
#define LFGFGFFOADO_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x18C48290)
#define LFGFGFFOADO_MNJOCIFNCFK_OFFSET UNITYSDK_OFFSET(0x18C48250)
#define LFGFGFFOADO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C482F0)

inline static constexpr unsigned int LFGFGFFOADO_TypeDefinitionIndex = 60671;

	class LFGFGFFOADO : public ::System::Object
	{
	public:
		::FBKGNHKJOPJ* FKKNLHAEGOL; // 0x10
		::System::Void _ctor(::FBKGNHKJOPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBKGNHKJOPJ*))((::PBYTE)hIl2Cpp + LFGFGFFOADO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MNJOCIFNCFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGFGFFOADO_MNJOCIFNCFK_OFFSET))(this);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGFGFFOADO_KEOKEELBKHI_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGFGFFOADO_TOSTRING_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPDPAJGFBMM;
namespace System { class Object; }

#define LPDPAJGFBMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99C890)
#define LPDPAJGFBMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99C8C0)
#define LPDPAJGFBMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E99C8D0)

inline static constexpr unsigned int LPDPAJGFBMM___c_TypeDefinitionIndex = 33291;

	class LPDPAJGFBMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPDPAJGFBMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM___C_CTOR_OFFSET))(this);
		}

		::LPDPAJGFBMM* __cctor_b__23_0()
		{
			return ((::LPDPAJGFBMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDPAJGFBMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

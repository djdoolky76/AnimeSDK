#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCAEIHGJFDE;
namespace System { class Object; }

#define DCAEIHGJFDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E166D80)
#define DCAEIHGJFDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E166DC0)
#define DCAEIHGJFDE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E166DD0)

inline static constexpr unsigned int DCAEIHGJFDE___c_TypeDefinitionIndex = 32993;

	class DCAEIHGJFDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x264B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCAEIHGJFDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAEIHGJFDE___C_CTOR_OFFSET))(this);
		}

		::DCAEIHGJFDE* __cctor_b__28_0()
		{
			return ((::DCAEIHGJFDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCAEIHGJFDE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

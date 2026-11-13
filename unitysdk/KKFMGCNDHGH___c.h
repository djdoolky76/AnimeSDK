#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKFMGCNDHGH;
namespace System { class Object; }

#define KKFMGCNDHGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFE9B90)
#define KKFMGCNDHGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFE9BD0)
#define KKFMGCNDHGH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FFE9BE0)

inline static constexpr unsigned int KKFMGCNDHGH___c_TypeDefinitionIndex = 28698;

	class KKFMGCNDHGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x176E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKFMGCNDHGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH___C_CTOR_OFFSET))(this);
		}

		::KKFMGCNDHGH* __cctor_b__23_0()
		{
			return ((::KKFMGCNDHGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKFMGCNDHGH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

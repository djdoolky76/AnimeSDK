#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPPACPMFDJ;
namespace System { class Object; }

#define PFPPACPMFDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F8CE0)
#define PFPPACPMFDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F8D20)
#define PFPPACPMFDJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1F8D30)

inline static constexpr unsigned int PFPPACPMFDJ___c_TypeDefinitionIndex = 27585;

	class PFPPACPMFDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPPACPMFDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ___C_CTOR_OFFSET))(this);
		}

		::PFPPACPMFDJ* __cctor_b__28_0()
		{
			return ((::PFPPACPMFDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPPACPMFDJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

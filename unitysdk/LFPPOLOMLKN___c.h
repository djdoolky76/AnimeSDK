#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFPPOLOMLKN;
namespace System { class Object; }

#define LFPPOLOMLKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E91AC20)
#define LFPPOLOMLKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E91AC50)
#define LFPPOLOMLKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E91AC60)

inline static constexpr unsigned int LFPPOLOMLKN___c_TypeDefinitionIndex = 25569;

	class LFPPOLOMLKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x344F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFPPOLOMLKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN___C_CTOR_OFFSET))(this);
		}

		::LFPPOLOMLKN* __cctor_b__28_0()
		{
			return ((::LFPPOLOMLKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
namespace System { class Object; }

#define FDBDLBAPDBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3516E0)
#define FDBDLBAPDBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E351710)
#define FDBDLBAPDBE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E351720)

inline static constexpr unsigned int FDBDLBAPDBE___c_TypeDefinitionIndex = 33233;

	class FDBDLBAPDBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5AFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDBDLBAPDBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE___C_CTOR_OFFSET))(this);
		}

		::FDBDLBAPDBE* __cctor_b__23_0()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDBDLBAPDBE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};

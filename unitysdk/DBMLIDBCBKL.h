#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }

#define DBMLIDBCBKL_CTOR_OFFSET UNITYSDK_OFFSET(0xE232EA0)
#define DBMLIDBCBKL_IOBPNAFKJCH_OFFSET UNITYSDK_OFFSET(0xE232E20)
#define DBMLIDBCBKL_MDOIFCJKHJK_OFFSET UNITYSDK_OFFSET(0xE232E60)

	class DBMLIDBCBKL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMLIDBCBKL_CTOR_OFFSET))(this);
		}

		static ::System::Void IOBPNAFKJCH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBMLIDBCBKL_IOBPNAFKJCH_OFFSET))();
		}

		static ::System::Void MDOIFCJKHJK(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + DBMLIDBCBKL_MDOIFCJKHJK_OFFSET))(a1);
		}

	};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGNDLIOMDIG;
class OAHKEMMHANM;
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Tuple; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class FileInfo; }

#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30_CTOR_OFFSET UNITYSDK_OFFSET(0xBD221C0)
#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBD22640)
#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBD238F0)
#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBD23880)
#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xBD23950)
#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBD238E0)
#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBD23890)
#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD22500)
#define OAHKEMMHANM__GETNEEDCLEARFILES_D__30___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xBD22540)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30>
	class OAHKEMMHANM__GetNeedClearFiles_d__30 : public ::System::Object
	{
	public:
		::System::Tuple* __2__current; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _hashFilePathMaps_5__4; // 0x18
		::RPG::Client::VideoBundleInfoItem* _video_5__7; // 0x20
		::OAHKEMMHANM* __4__this; // 0x28
		::System::Collections::Generic::IEnumerator_1<::System::IO::FileInfo*>* __7__wrap4; // 0x30
		::AGNDLIOMDIG* _indexStream_5__3; // 0x38
		::AGNDLIOMDIG* _indexInfo_5__2; // 0x40
		::System::IO::FileInfo* _fileInfo_5__6; // 0x48
		::System::Boolean __3__usePersistIndex; // 0x50
		::System::Boolean usePersistIndex; // 0x51
		::System::Byte _padding0[0x2];
		::System::Int32 __l__initialThreadId; // 0x54
		::System::Int32 __1__state; // 0x58
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30___M__FINALLY1_OFFSET))(this);
		}

		::System::Tuple* System_Collections_Generic_IEnumerator_System_Tuple_System_String_System_Boolean___get_Current()
		{
			return ((::System::Tuple*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Tuple*>* System_Collections_Generic_IEnumerable_System_Tuple_System_String_System_Boolean___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Tuple*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TUPLE_SYSTEM_STRING_SYSTEM_BOOLEAN___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAHKEMMHANM__GETNEEDCLEARFILES_D__30_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
